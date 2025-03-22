import requests
from bs4 import BeautifulSoup
import pandas as pd

def statsScraper(tablePath, tableID, output_csv):
    url = "https://www.baseball-reference.com/leagues/majors/" + tablePath + ".shtml"
    response = requests.get(url)
    if response.status_code != 200:
        print(f"Failed to Fetch Data: {response.status_code}")

    soup = BeautifulSoup(response.text, 'html.parser');
    table = soup.find('div', {'id': tableID})
    headers = [th.text for th in table.find('thead').find_all('th')]

    rows = []
    for tr in table.find('tbody').find_all('tr'):
        row = [td.text.strip() for td in tr.find_all('td')]
        if row:
            rows.append(row)

    df = pd.DataFrame(rows, columns=headers[1:])
    df.insert(0, headers[0], [tr.find('th').text.strip() for tr in table.find('tbody').find_all('tr') if tr.find('th')])
    df.to_csv(output_csv, index=False)
    print(tableID)
    print(f"Stats saved to {output_csv}")


if __name__ == '__main__':
    statsDir = "Baseball_Stats/"

    while True:
        print("Options: updateBatting, updatePitching, updateFielding, exit")
        menuoption: str = input("cBaseball-Updater $> ")

        match (menuoption):
            case "updateBatting":
                statsScraper("2024-standard-batting", "div_teams_standard_batting", f"{statsDir}team_standard_batting24.csv")               
            case "updatePitching":
                statsScraper("2024-standard-pitching", "div_teams_standard_pitching", f"{statsDir}team_standard_pitching24.csv")
            case "updateFielding":
                statsScraper("2024-standard-fielding", "div_teams_standard_fielding", f"{statsDir}team_standard_fielding24.csv")        
            case "exit":
                break
            case _:
                print(menuoption, " not recognized")