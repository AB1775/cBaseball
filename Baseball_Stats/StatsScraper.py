import requests
from bs4 import BeautifulSoup
import pandas as pd

def scrape_batting_stats(url, output_csv):
    response = requests.get(url)
    if response.status_code != 200:
        print(f"Failed to Fetch Data: {response.status_code}")
        return
    
    soup = BeautifulSoup(response.text, 'html.parser');
    table = soup.find('div', {'id': 'all_teams_standard_batting'})
    headers = [th.text for th in table.find('thead').find_all('th')]

    rows = []
    for tr in table.find('tbody').find_all('tr'):
        row = [td.text.strip() for td in tr.find_all('td')]
        if row:
            rows.append(row)
        
    df = pd.DataFrame(rows, columns=headers[1:])
    df.insert(0, headers[0], [tr.find('th').text.strip() for tr in table.find('tbody').find_all('tr') if tr.find('th')])
    df.to_csv(output_csv, index=False)
    print(f"Batting Stats saved to {output_csv}")

def scrape_pitching_stats(url, output_csv):
    response = requests.get(url)
    if response.status_code != 200:
        print(f"Failed to Fetch Data: {response.status_code}")
        return
    
    soup = BeautifulSoup(response.text, 'html.parser');
    table = soup.find('div', {'id': 'all_teams_standard_pitching'})
    headers = [th.text for th in table.find('thead').find_all('th')]

    rows = []
    for tr in table.find('tbody').find_all('tr'):
        row = [td.text.strip() for td in tr.find_all('td')]
        if row:
            rows.append(row)
        
    df = pd.DataFrame(rows, columns=headers[1:])
    df.insert(0, headers[0], [tr.find('th').text.strip() for tr in table.find('tbody').find_all('tr') if tr.find('th')])
    df.to_csv(output_csv, index=False)
    print(f"Pitching Stats saved to {output_csv}")

def scrape_fielding_stats(url, output_csv):
    response = requests.get(url)
    if response.status_code != 200:
        print(f"Failed to Fetch Data: {response.status_code}")
        return
    
    soup = BeautifulSoup(response.text, 'html.parser');
    table = soup.find('div', {'id': 'all_teams_standard_fielding'})
    headers = [th.text for th in table.find('thead').find_all('th')]

    rows = []
    for tr in table.find('tbody').find_all('tr'):
        row = [td.text.strip() for td in tr.find_all('td')]
        if row:
            rows.append(row)
        
    df = pd.DataFrame(rows, columns=headers[1:])
    df.insert(0, headers[0], [tr.find('th').text.strip() for tr in table.find('tbody').find_all('tr') if tr.find('th')])
    df.to_csv(output_csv, index=False)
    print(f"Fielding Stats saved to {output_csv}")


if __name__ == '__main__':
    while True:
        print("Options: updateBatting, updatePitching, updateFielding, exit")
        menuoption: str = input("cBaseball-Updater $> ")

        match (menuoption):
            case "updateBatting":
                scrape_batting_stats(
                    "https://www.baseball-reference.com/leagues/majors/2024-standard-batting.shtml",
                    "Baseball_Stats/team_standard_batting24.csv"
                )            
            case "updatePitching":
                scrape_pitching_stats(
                    "https://www.baseball-reference.com/leagues/majors/2024-standard-pitching.shtml",
                    "Baseball_Stats/team_standard_pitching24.csv"
                )
            case "updateFielding":
                scrape_fielding_stats(
                    "https://www.baseball-reference.com/leagues/majors/2024-standard-fielding.shtml",
                    "Baseball_Stats/team_standard_fielding24.csv"
                )           
            case "exit":
                break
            case _:
                print(menuoption, " not recognized")