#include "include/TeamHeader.h"
#include <limits>

using namespace std;

int main()
{
  vector<string> fieldTitlesVector;
  vector<teamBatting> teamsBattingVector;
  vector<teamPitching> teamsPitchingVector;
  vector<teamFielding> teamsFieldingVector;

  while(true) 
  {
      cout << "---------------------------" << endl;
      cout << "|         cBaseball       |" << endl;
      cout << "---------------------------" << endl;
      cout << "1. Team Batting Stats" << endl;
      cout << "2. Team Pitching Stats" << endl;
      cout << "3. Team Fielding Stats" << endl;
      cout << "4. Exit Program" << endl;
      cout << "[+] Enter an Option (1 - 3, 4 to Exit): ";

      int userInput;
      cin >> userInput;

      // Error Handling - Invalid Input //
      if (cin.fail())
      {
        cout << "[!] Invalid Input. Please Enter a Valid Integer." << endl;

        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      }

      if (userInput == 1)
      {
            cout << "\n\n";
            ifstream file(batting);
            fileChecker(file);

            fieldTitlesFunction(file, fieldTitlesVector);
            if (!file.is_open())
            {
                return false;
            }

            teamBattingFunction(file, teamsBattingVector);
            cout << "\n\n";

            cout << " ------------------------- " << endl;
            cout << " | Team Batting Sub-Menu | " << endl;
            cout << " ------------------------- " << endl;
            cout << " 1. Display all Batting Stats " << endl;
            cout << " 2. Search Team " << endl;
            cout << " 3. Compare Two Teams " << endl;
            cout << "[+] Enter an Option: ";

            cin >> userInput;

            if (userInput == 1)
            {   // Stop at 30 to Avoid League Averages //
                for (int i = 0; i < 30; ++i)
                { teamsBattingVector[i].displayStats(); }
            }
            else if (userInput == 2) 
            {
                teamStatsDisplay(teamsBattingVector);
            }
            else if (userInput == 3)
            {
               compareTeams(teamsBattingVector);
            }
            file.close();
      }
      else if (userInput == 2)
      {
            cout << "\n\n";

            ifstream file(pitching);
            fileChecker(file);
            
            fieldTitlesFunction(file, fieldTitlesVector);
            if (!file.is_open())
            {
                return false;
            }

            teamPitchingFunction(file, teamsPitchingVector); 
            cout << "\n\n";

            cout << " -------------------------- " << endl;
            cout << " | Team Pitching Sub-Menu | " << endl;
            cout << " -------------------------- " << endl;
            cout << " 1. Display all Pitching Stats " << endl;
            cout << " 2. Search Team " << endl;
            cout << " 3. Compare Two Teams " << endl;
            cout << "[+] Enter an Option: ";

            cin >> userInput;

            if (userInput == 1)
            {   // Stop at 30 to Avoid League Averages //
                for (int i = 0; i < 30; ++i)
                { teamsPitchingVector[i].displayStats(); }
            }
            else if (userInput == 2)
            {
                teamStatsDisplay(teamsPitchingVector);
            }
            else if (userInput == 3)
            {
                compareTeams(teamsPitchingVector);
            }
            file.close();      
      }
      else if (userInput == 3)
      { 
            cout << "\n\n";

            ifstream file(fielding);
            fileChecker(file);
            fieldTitlesFunction(file, fieldTitlesVector);
            if (!file.is_open())
            {
                return false;
            }
            
            teamFieldingFunction(file, teamsFieldingVector);
            cout << "\n\n";

            cout << " -------------------------- " << endl;
            cout << " | Team Fielding Sub-Menu | " << endl;
            cout << " -------------------------- " << endl;
            cout << " 1. Display all Fielding Stats " << endl;
            cout << " 2. Search Team " << endl;
            cout << " 3. Compare Two Teams " << endl;
            cout << "[+] Enter an Option: ";

            cin >> userInput;

            if (userInput == 1)
            {   // Stop at 30 to Avoid League Averages //
                for (int i = 0; i < 30; ++i)
                { teamsFieldingVector[i].displayStats(); }
            }
            else if (userInput == 2)
            {
                teamStatsDisplay(teamsFieldingVector);
            }
            else if (userInput == 3)
            {
                compareTeams(teamsFieldingVector);
            }
            file.close();
      }
      else if (userInput == 4)
      {
            cout << "Exiting Program..." << endl; 
            return false;
      }
      else
      {
        cerr << "[!] ERROR: Please Enter a Valid Menu Option." << endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        continue;
      }
  }
  return 0;
}
