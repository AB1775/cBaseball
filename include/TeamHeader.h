#ifndef TEAMHEADER_H
#define TEAMHEADER_H

#include "FileHandling.h"
#include <iomanip>

////////////////////////////
// Team Batting Structure //
////////////////////////////
/**
 * @brief Structure to Store Team Batting Stats
 */
struct teamBatting
{
    std::string teamName;
    int numPlayersUsed = 0;
    double averageBatAge = 0.00;
    double runsScoredPerGame = 0.00;
    int gamesPlayed = 0;
    int plateApp = 0;
    int atBats = 0;
    int runsScored = 0;
    int hits = 0;
    int doubles = 0;
    int triples = 0;
    int homeRuns = 0;
    int runsBattedIn = 0;
    int basesStolen = 0;
    int caughtStealing = 0;
    int walks = 0;
    int strikeouts = 0;
    double hitsAtBat = 0.00;
    double obp = 0.00;
    double slg = 0.00;
    double ops = 0.00;
    double opsPlus = 0.00;
    int totalBases = 0;
    int gdp = 0;
    int hitByPitch = 0;
    int bunts = 0;
    int sacFlies = 0;
    int intentionalWalks = 0;
    int leftOnBase = 0;

    /**
     * @brief Function to Display Team Batting Stats
     */
    void displayStats() const {
        std::cout << "\n\n";
        std::cout << teamName << std::endl;
        std::cout << "-------------------------------------" << std::endl;
        std::cout << std::left << std::setw(35) << "Number of Players Used: " << numPlayersUsed << std::endl;
        std::cout << std::left << std::setw(35) << "Average Batter Age: " << averageBatAge << std::endl;
        std::cout << std::left << std::setw(35) << "Runs Per Game: " << runsScoredPerGame << std::endl;
        std::cout << std::left << std::setw(35) << "Games Played: " << gamesPlayed << std::endl;
        std::cout << std::left << std::setw(35) << "Plate Appearances: " << plateApp << std::endl;
        std::cout << std::left << std::setw(35) << "At Bats: " << atBats << std::endl;
        std::cout << std::left << std::setw(35) << "Runs Scored: " << runsScored << std::endl;
        std::cout << std::left << std::setw(35) << "Hits: " << hits << std::endl;
        std::cout << std::left << std::setw(35) << "Doubles: " << doubles << std::endl;
        std::cout << std::left << std::setw(35) << "Triples: " << triples << std::endl;
        std::cout << std::left << std::setw(35) << "Home Runs: " << homeRuns << std::endl;
        std::cout << std::left << std::setw(35) << "RBIs: " << runsBattedIn << std::endl;
        std::cout << std::left << std::setw(35) << "Bases Stolen: " << basesStolen << std::endl;
        std::cout << std::left << std::setw(35) << "Bases Caught Stealing: " << caughtStealing << std::endl;
        std::cout << std::left << std::setw(35) << "Walks: " << walks << std::endl;
        std::cout << std::left << std::setw(35) << "Strikeouts: " << strikeouts << std::endl;
        std::cout << std::left << std::setw(35) << "Hits @ Bat: " << hitsAtBat << std::endl;
        std::cout << std::left << std::setw(35) << "OBP: " << obp << std::endl;
        std::cout << std::left << std::setw(35) << "Slug Percentage: " << slg << std::endl;
        std::cout << std::left << std::setw(35) << "OPS: " << ops << std::endl;
        std::cout << std::left << std::setw(35) << "OPS+: " << opsPlus << std::endl;
        std::cout << std::left << std::setw(35) << "Total Bases: " << totalBases << std::endl;
        std::cout << std::left << std::setw(35) << "Double Plays Grounded Into: " << gdp << std::endl;
        std::cout << std::left << std::setw(35) << "Hit by Pitch: " << hitByPitch << std::endl;
        std::cout << std::left << std::setw(35) << "Bunts: " << bunts << std::endl;
        std::cout << std::left << std::setw(35) << "Sacrifice Flies: " << sacFlies << std::endl;
        std::cout << std::left << std::setw(35) << "Intentional Walks: " << intentionalWalks << std::endl;
        std::cout << std::left << std::setw(35) << "Left on Base: " << leftOnBase << std::endl;
        std::cout << "\n\n";
    }
};

/////////////////////////////
// Team Pitching Structure //
/////////////////////////////
/**
 * @brief Structure to Store Team Pitching Stats
 */
struct teamPitching
{
    std::string teamName;
    int numPlayersUsed = 0;
    double averagePitchAge = 0.00;
    double runsAllowedPerGame = 0.00;
    int wins = 0;
    int losses = 0;
    double winLossPercentage = 0.00;
    double era = 0.00;
    int gamesPlayed = 0;
    int gamesStarted = 0;
    int gamesFinished = 0;
    int completeGames = 0;
    int shutoutsByTeam = 0;
    int shutouts = 0;
    int saves = 0;
    double inningsPitched = 0.00;
    int hitsAllowed = 0;
    int runsScored = 0;
    int earnedRunsAllowed = 0;
    int homeRunsAllowed = 0;
    int walks = 0;
    int intentionalWalks = 0;
    int strikeouts = 0;
    int hitByPitch = 0;
    int balks = 0;
    int wildPitches = 0;
    int battersFaced = 0;
    int eraPlus = 0;
    double fip = 0.00;
    double whip = 0.00;
    double h9 = 0.00;
    double hr9 = 0.00;
    double bb9 = 0.00;
    double so9 = 0.00;
    double so_w = 0.00;
    int lob = 0;

    /**
     * @brief Function to Display Team Pitching Stats
     */
    void displayStats() const {
        std::cout << "\n\n";
        std::cout << teamName << std::endl;
        std::cout << "---------------------------" << std::endl;
        std::cout << std::left << std::setw(35) << "Number of Players Used: " << numPlayersUsed << std::endl;
        std::cout << std::left << std::setw(35) << "Average Pitcher Age: " << averagePitchAge << std::endl;
        std::cout << std::left << std::setw(35) << "Runs Allowed Per Game: " << runsAllowedPerGame << std::endl;
        std::cout << std::left << std::setw(35) << "Wins: " << wins << std::endl;
        std::cout << std::left << std::setw(35) << "Losses: " << losses << std::endl;
        std::cout << std::left << std::setw(35) << "Win / Loss Percentage: " << winLossPercentage << "%" << std::endl;
        std::cout << std::left << std::setw(35) << "ERA: " << era << std::endl;
        std::cout << std::left << std::setw(35) << "Games Played: " << gamesPlayed << std::endl;
        std::cout << std::left << std::setw(35) << "Games Started: " << gamesStarted << std::endl;
        std::cout << std::left << std::setw(35) << "Games Finished: " << gamesFinished << std::endl;
        std::cout << std::left << std::setw(35) << "Games Completed: " << completeGames << std::endl;
        std::cout << std::left << std::setw(35) << "Shutouts by Team: " << shutoutsByTeam << std::endl;
        std::cout << std::left << std::setw(35) << "Shutouts: " << shutouts << std::endl;
        std::cout << std::left << std::setw(35) << "Saves: " << saves << std::endl;
        std::cout << std::left << std::setw(35) << "Innings Pitched: " << inningsPitched << std::endl;
        std::cout << std::left << std::setw(35) << "Hits Allowed: " << hitsAllowed << std::endl;
        std::cout << std::left << std::setw(35) << "Runs Scored: " << runsScored << std::endl;
        std::cout << std::left << std::setw(35) << "Earned Runs Allowed: " << earnedRunsAllowed << std::endl;
        std::cout << std::left << std::setw(35) << "Home Runs Allowed: " << homeRunsAllowed << std::endl;
        std::cout << std::left << std::setw(35) << "Walks: " << walks << std::endl;
        std::cout << std::left << std::setw(35) << "Intentional Walks: " << intentionalWalks << std::endl;
        std::cout << std::left << std::setw(35) << "Strikeouts: " << strikeouts << std::endl;
        std::cout << std::left << std::setw(35) << "Hit by Pitch: " << hitByPitch << std::endl;
        std::cout << std::left << std::setw(35) << "Balks: " << balks << std::endl;
        std::cout << std::left << std::setw(35) << "Wild Pitches: " << wildPitches << std::endl;
        std::cout << std::left << std::setw(35) << "Batters Faced: " << battersFaced << std::endl;
        std::cout << std::left << std::setw(35) << "ERA+: " << eraPlus << std::endl;
        std::cout << std::left << std::setw(35) << "FIP: " << fip << std::endl;
        std::cout << std::left << std::setw(35) << "WHIP: " << whip << std::endl;
        std::cout << std::left << std::setw(35) << "H9: " << h9 << std::endl;
        std::cout << std::left << std::setw(35) << "HR9: " << hr9 << std::endl;
        std::cout << std::left << std::setw(35) << "BB9: " << bb9 << std::endl;
        std::cout << std::left << std::setw(35) << "SO9: " << so9 << std::endl;
        std::cout << std::left << std::setw(35) << "SO/W: " << so_w << std::endl;
        std::cout << std::left << std::setw(35) << "LOB: " << lob << std::endl;
        std::cout << "\n\n";
    }
};

/////////////////////////////
// Team Fielding Structure //
/////////////////////////////
/**
 * @brief Structure to Store Team Fielding Stats
 */
struct teamFielding
{ 
    std::string teamName;
    int numPlayersUsed = 0;
    double runsAllowedPerGame = 0.00;
    double defEff = 0.00;
    int gamesPlayed = 0;
    int gamesStarted = 0;
    int completeGames = 0;
    double inningsPlayed = 0.00;
    int defensiveChances = 0;
    int putOuts = 0;
    int assists = 0;
    int errors = 0;
    int doublePlaysTurned = 0;
    double fieldingPercentage = 0.00;
    int rtot = 0;
    int rtot_yr = 0;
    int defensiveRunsSaved = 0;
    int defensiveRunsSavedYr = 0;
    int rgood = 0;

    /**
     * @brief Function to Display Team Fielding Stats
     */
    void displayStats() const {
        std::cout << "\n\n";
        std::cout << teamName << std::endl;
        std::cout << "---------------------------" << std::endl;
        std::cout << std::left << std::setw(35) << "Number of Players Used: " << numPlayersUsed << std::endl;
        std::cout << std::left << std::setw(35) << "Runs Allowed Per Game: " << runsAllowedPerGame << std::endl;
        std::cout << std::left << std::setw(35) << "Defensive Efficiency: " << numPlayersUsed << std::endl;
        std::cout << std::left << std::setw(35) << "Games Played: " << gamesPlayed << std::endl;
        std::cout << std::left << std::setw(35) << "Games Started: " << gamesStarted << std::endl;
        std::cout << std::left << std::setw(35) << "Games Completed: " << completeGames << std::endl;
        std::cout << std::left << std::setw(35) << "Innings Played: " << inningsPlayed << std::endl;
        std::cout << std::left << std::setw(35) << "Defensive Chances: " << defensiveChances << std::endl;
        std::cout << std::left << std::setw(35) << "Put Outs: " << putOuts << std::endl;
        std::cout << std::left << std::setw(35) << "Assists: " << assists << std::endl;
        std::cout << std::left << std::setw(35) << "Errors: " << errors << std::endl;
        std::cout << std::left << std::setw(35) << "Double Plays Turned: " << doublePlaysTurned << std::endl;
        std::cout << std::left << std::setw(35) << "Fielding Percentage: " << fieldingPercentage << "%" << std::endl;
        std::cout << std::left << std::setw(35) << "RTOT: " << rtot << std::endl;
        std::cout << std::left << std::setw(35) << "RTOT / 1200 Innings: " << rtot_yr << std::endl;
        std::cout << std::left << std::setw(35) << "Defensive Runs Saved: " << defensiveRunsSaved << std::endl;
        std::cout << std::left << std::setw(35) << "Defensive Runs Saved / 1200 Innings: " << defensiveRunsSavedYr << std::endl;
        std::cout << std::left << std::setw(35) << "RGOOD: " << rgood << std::endl;
        std::cout << "\n\n";
    }
};

/////////////////////////////////////////////////////
// Function to Assign Stats to Team Batting Vector //
/////////////////////////////////////////////////////
/**
 * @brief Function to Assign Stats to Team Batting Vector
 * @param file - File to Read Data From
 * @param vector - Vector to Store Data
 * @return void
 */
void teamBattingFunction(std::ifstream &file, std::vector<teamBatting> &vector)
{
    // Populate teamsBattingVector with Stats
    std::string line;

    while (getline(file, line))
    {
        std::istringstream lineStream(line);
        teamBatting team;
        std::string attribute;

        if (getline(lineStream, attribute, ','))
        { team.teamName = attribute; }

        if (getline(lineStream, attribute, ','))
        { team.numPlayersUsed = stoi(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.averageBatAge = stod(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.runsScoredPerGame = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesPlayed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.plateApp = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.atBats = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.runsScored = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hits = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.doubles = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.triples = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.homeRuns = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.runsBattedIn = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.basesStolen = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.caughtStealing = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.walks = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.strikeouts = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hitsAtBat = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.obp = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.slg = stod(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.ops = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.opsPlus = stod(attribute); }
        
        if (getline(lineStream, attribute, ',')) 
        { team.totalBases = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gdp = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hitByPitch = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.bunts = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.sacFlies = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.intentionalWalks = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.leftOnBase = stoi(attribute); }
        
        vector.push_back(team);
    }
}

/////////////////////////////////////////////////
// Function to Assign Stats to Pitching Vector //
/////////////////////////////////////////////////
/**
 * @brief Function to Assign Stats to Team Pitching Vector
 * @param file - File to Read Data From
 * @param vector - Vector to Store Data
 * @return void
 */
void teamPitchingFunction(std::ifstream &file, std::vector<teamPitching> &vector)
{
    // Populate teamsPitchingVector with Stats
    std::string line;

    while (getline(file, line))
    {
        std::istringstream lineStream(line);
        teamPitching team;
        std::string attribute;

        if (getline(lineStream, attribute, ','))
        { team.teamName = attribute; }

        if (getline(lineStream, attribute, ','))
        { team.numPlayersUsed = stoi(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.averagePitchAge = stod(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.runsAllowedPerGame = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.wins = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.losses = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.winLossPercentage = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.era = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesPlayed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesStarted = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesFinished = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.completeGames = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.shutoutsByTeam = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.shutouts = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.saves = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.inningsPitched = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hitsAllowed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.runsScored = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.earnedRunsAllowed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.homeRunsAllowed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.walks = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.intentionalWalks = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.strikeouts = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hitByPitch = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.balks = stoi(attribute); }
        
        if (getline(lineStream, attribute, ',')) 
        { team.wildPitches = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.battersFaced = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.eraPlus = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.fip = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.whip = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.h9 = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.hr9 = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.bb9 = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.so9 = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.so_w = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.lob = stoi(attribute); }
        
        vector.push_back(team);
    }
}

/////////////////////////////////////////////////
// Function to Assign Stats to Fielding Vector //
/////////////////////////////////////////////////
/**
 * @brief Function to Assign Stats to Team Fielding Vector
 * @param file - File to Read Data From
 * @param vector - Vector to Store Data
 * @return void
 */
void teamFieldingFunction(std::ifstream &file, std::vector<teamFielding> &vector)
{
    // Populate teamsFieldingVector with Stats
    std::string line;

    while (getline(file, line))
    {
        std::istringstream lineStream(line);
        teamFielding team;
        std::string attribute;

        if (getline(lineStream, attribute, ','))
        { team.teamName = attribute; }

        if (getline(lineStream, attribute, ','))
        { team.numPlayersUsed = stoi(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.runsAllowedPerGame = stod(attribute); }

        if (getline(lineStream, attribute, ','))
        { team.defEff = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesPlayed = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.gamesStarted = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.completeGames = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.inningsPlayed = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.defensiveChances = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.putOuts = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.assists = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.errors = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.doublePlaysTurned = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.fieldingPercentage = stod(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.rtot = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.rtot_yr = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.defensiveRunsSaved = stoi(attribute); }

        if (getline(lineStream, attribute, ',')) 
        { team.rgood = stoi(attribute); }

        vector.push_back(team);
    }
}

////////////////////////////////////////
// Team Search and Stats Display Menu //
////////////////////////////////////////
/**
 * @brief Function to Display Team Stats
 * @param searchVector - Vector to Search
 * @return void
 */
template<typename T> // 'T' Represents any Team Structure
void teamStatsDisplay(std::vector<T>& searchVector)
{
    std::cout << "\n\n[     Team Search Menu    ]" << std::endl;

    for (size_t i = 0; i < 30; ++i)
    {
        std::cout << "---------------------------" << std::endl;
        std::cout << i + 1 << ". " << searchVector[i].teamName << std::endl;
    }
    std::cout << "\n\n";

    int userInput;
    std::cout << "[+] Select a Team (1-" << searchVector.size()-2 << " or 0 to Exit): ";
    std::cin >> userInput;

    if (userInput == 0)
    {
        std::cout << "Exiting Team Search..." << std::endl;
    }
    if (userInput < 1 || userInput > static_cast<int>(searchVector.size()-2))
    {
        std::cout << "Invalid Input. Please Select a Valid Option." << std::endl;
        return;
    }
    searchVector[userInput - 1].displayStats();
}

/////////////////////////////////////
// Team Stats Comparison Functions //
/////////////////////////////////////
/**
 * @brief Function to Compare Team Stats
 * @param searchVector - Vector to Search
 * @return void
 */
template <typename T>
void compareTeams(const std::vector<T>& searchVector);

/////////////////////////////////////
// Team Batting Comparison Fuction //
///////////////////////////////////// 
/**
 * @brief Function to Compare Team Batting Stats
 * @param searchVector - Vector to Search
 * @return void
 */
template<>
void compareTeams<teamBatting>(const std::vector<teamBatting>& searchVector)
{
    std::cout << "\n\n--------------------------------" << std::endl;
    std::cout << "|  Team Batting Comparison Menu  |" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    
    for (size_t i = 0; i < 30; ++i)
    {
       std::cout << "----------------------------" << std::endl;
       std::cout << i + 1 << ". " << searchVector[i].teamName << std::endl; 
    }
    std::cout << "\n\n";

    int teamA_Index = 0, teamB_Index = 0;

    std::cout << "[+] Enter First Team (or 0 to Exit): ";
    std::cin >> teamA_Index;

    std::cout << "\n[+] Enter Second Team (or 0 to Exit): ";
    std::cin >> teamB_Index;


    if (teamA_Index == 0 || teamB_Index == 0)
    {
        std::cout << "\n[+] Exiting the Teams Batting Comparison Menu..." << std::endl;
        return;
    }
    if (teamA_Index < 1 || teamA_Index > static_cast<int>(searchVector.size()) || teamB_Index < 1 || teamB_Index > static_cast<int>(searchVector.size()) || teamA_Index == teamB_Index)
    {
        std::cout << "\n[!] ERROR: Invalid Team Index" << std::endl;
        return;
    }

    // Adjust Input for Zero-Based Index //
    teamA_Index -= 1;
    teamB_Index -= 1;

    const auto& teamA = searchVector[teamA_Index];
    const auto& teamB = searchVector[teamB_Index];

    teamA.displayStats();
    teamB.displayStats();

    // Comparison Logic Starts Here //
    auto compareHigherBetterStats = [](auto a, auto b) { return a > b; };
    auto compareLowerBetterStats = [](auto a, auto b) { return a < b; };
    auto checkForEquality = [](auto a, auto b) { return a == b; };

    auto higherComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareHigherBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareHigherBetterStats)
        { std::cout << "[" << teamA << "]: HIGHER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: HIGHER " << statDescription << std::endl;}
    };

    auto lowerComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareLowerBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareLowerBetterStats)
        { std::cout << "[" << teamA << "]: LOWER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: LOWER " << statDescription << std::endl;}
    };

    std::cout << "[    Batting Comparison Summary: " << teamA.teamName << " vs " << teamB.teamName << "    ]" << std::endl;

    std::cout << "\n";
    std::cout << "--------------------------------" << std::endl;
    std::cout << "|      Production Metrics      |" << std::endl;
    std::cout << "--------------------------------" << std::endl;    
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Strikeouts", compareLowerBetterStats(teamA.strikeouts, teamB.strikeouts), checkForEquality(teamA.strikeouts, teamB.strikeouts));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Hits", compareHigherBetterStats(teamA.hits, teamB.hits), checkForEquality(teamA.hits, teamB.hits));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Doubles", compareHigherBetterStats(teamA.doubles, teamB.doubles), checkForEquality(teamA.doubles, teamB.doubles));
    higherComparison(teamA.teamName, teamB.teamName, "Number of triples", compareHigherBetterStats(teamA.triples, teamB.triples), checkForEquality(teamA.triples, teamB.triples));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Runs", compareHigherBetterStats(teamA.runsScored, teamB.runsScored), checkForEquality(teamA.runsScored, teamB.runsScored));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Home Runs", compareHigherBetterStats(teamA.homeRuns, teamB.homeRuns), checkForEquality(teamA.homeRuns, teamB.homeRuns));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Runs Scored Per Game", compareHigherBetterStats(teamA.runsScoredPerGame, teamB.runsScoredPerGame), checkForEquality(teamA.runsScoredPerGame, teamB.runsScoredPerGame));
    higherComparison(teamA.teamName, teamB.teamName, "Total Bases Gained Via Hitting", compareHigherBetterStats(teamA.totalBases, teamB.totalBases), checkForEquality(teamA.totalBases, teamB.totalBases));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Runs Batted In", compareHigherBetterStats(teamA.runsBattedIn, teamB.runsBattedIn), checkForEquality(teamA.runsBattedIn, teamB.runsBattedIn));

    std::cout << "\n";
    std::cout << "--------------------------------" << std::endl;
    std::cout << "|        On-Base Skill         |" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Hits Per At Bat", compareHigherBetterStats(teamA.hitsAtBat, teamB.hitsAtBat), checkForEquality(teamA.hitsAtBat, teamB.hitsAtBat));
    higherComparison(teamA.teamName, teamB.teamName, "On Base Percentage", compareHigherBetterStats(teamA.obp, teamB.obp), checkForEquality(teamA.obp, teamB.obp));
    higherComparison(teamA.teamName, teamB.teamName, "Slugging Percentage", compareHigherBetterStats(teamA.slg, teamB.slg), checkForEquality(teamA.slg, teamB.slg));
    higherComparison(teamA.teamName, teamB.teamName, "On Base Plus Slugging", compareHigherBetterStats(teamA.ops, teamB.ops), checkForEquality(teamA.ops, teamB.ops));
    higherComparison(teamA.teamName, teamB.teamName, "Adjusted On Base Plus Slugging", compareHigherBetterStats(teamA.opsPlus, teamB.opsPlus), checkForEquality(teamA.opsPlus, teamB.opsPlus));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Walks", compareHigherBetterStats(teamA.walks, teamB.walks), checkForEquality(teamA.walks, teamB.walks));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Batters Hit by Pitch", compareHigherBetterStats(teamA.hitByPitch, teamB.hitByPitch), checkForEquality(teamA.hitByPitch, teamB.hitByPitch));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Bases Stolen", compareHigherBetterStats(teamA.basesStolen, teamB.basesStolen), checkForEquality(teamA.basesStolen, teamB.basesStolen));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Bases Caught Stealing", compareLowerBetterStats(teamA.caughtStealing, teamB.caughtStealing), checkForEquality(teamA.caughtStealing, teamB.caughtStealing));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Double Plays Grounded Into", compareHigherBetterStats(teamA.gdp, teamB.gdp), checkForEquality(teamA.gdp, teamB.gdp));

    std::cout << "\n";
    std::cout << "--------------------------------" << std::endl;
    std::cout << "|    Situational Performance   |" << std::endl;
    std::cout << "--------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Intentional Walks", compareHigherBetterStats(teamA.intentionalWalks, teamB.intentionalWalks), checkForEquality(teamA.intentionalWalks, teamB.intentionalWalks));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Bunts", compareHigherBetterStats(teamA.bunts, teamB.bunts), checkForEquality(teamA.bunts, teamB.bunts));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Sacrifice Flies", compareHigherBetterStats(teamA.sacFlies, teamB.sacFlies), checkForEquality(teamA.sacFlies, teamB.sacFlies));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Runners Left on Base", compareLowerBetterStats(teamA.leftOnBase, teamB.leftOnBase), checkForEquality(teamA.leftOnBase, teamB.leftOnBase));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|       Other Statistics      |" << std::endl;
    std::cout << "-------------------------------" << std::endl; 
    higherComparison(teamA.teamName, teamB.teamName, "Number of Batters Used", compareHigherBetterStats(teamA.numPlayersUsed, teamB.numPlayersUsed), checkForEquality(teamA.numPlayersUsed, teamB.numPlayersUsed));
    higherComparison(teamA.teamName, teamB.teamName, "Average Batter Age", compareHigherBetterStats(teamA.averageBatAge, teamB.averageBatAge), checkForEquality(teamA.averageBatAge, teamB.averageBatAge));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Played", compareHigherBetterStats(teamA.gamesPlayed, teamB.gamesPlayed), checkForEquality(teamA.gamesPlayed, teamB.gamesPlayed));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Plate Appearances", compareHigherBetterStats(teamA.plateApp, teamB.plateApp), checkForEquality(teamA.plateApp, teamB.plateApp));
    higherComparison(teamA.teamName, teamB.teamName, "Number of At-Bats", compareHigherBetterStats(teamA.atBats, teamB.atBats), checkForEquality(teamA.atBats, teamB.atBats));
    std::cout << "\n";

}

///////////////////////////////////////
// Team Pitching Comparison Function //
///////////////////////////////////////
/**
 * @brief Function to Compare Team Pitching Stats
 * @param searchVector - Vector to Search
 * @return void
 */
template<>
void compareTeams<teamPitching>(const std::vector<teamPitching>& searchVector)
{
    std::cout << "\n\n";
    std::cout << "-----------------------------------" << std::endl;
    std::cout << "|  Team Pitching Comparison Menu  |" << std::endl;
    std::cout << "-----------------------------------" << std::endl;
    
    for (size_t i = 0; i < 30; ++i)
    {
       std::cout << "----------------------------" << std::endl;
       std::cout << i + 1 << ". " << searchVector[i].teamName << std::endl; 
    }
    std::cout << "\n\n";

    int teamA_Index = 0, teamB_Index = 0;

    std::cout << "[+] Enter First Team (or 0 to Exit): ";
    std::cin >> teamA_Index;

    std::cout << "\n[+] Enter Second Team (or 0 to Exit): ";
    std::cin >> teamB_Index;


    if (teamA_Index == 0 || teamB_Index == 0)
    {
        std::cout << "\n[+] Exiting the Teams Pitching Comparison Menu..." << std::endl;
        return;
    }
    if (teamA_Index < 1 || teamA_Index > static_cast<int>(searchVector.size()) || teamB_Index < 1 || teamB_Index > static_cast<int>(searchVector.size()) || teamA_Index == teamB_Index)
    {
        std::cout << "\n[!] ERROR: Invalid Team Index" << std::endl;
        return;
    }

    // Adjust Input for Zero-Based Index //
    teamA_Index -= 1;
    teamB_Index -= 1;

    const auto& teamA = searchVector[teamA_Index];
    const auto& teamB = searchVector[teamB_Index];

    teamA.displayStats();
    teamB.displayStats();

    // Comparison Logic Starts Here //
    auto compareHigherBetterStats = [](auto a, auto b) { return a > b; };
    auto compareLowerBetterStats = [](auto a, auto b) { return a < b; };
    auto checkForEquality = [](auto a, auto b) { return a == b; };

    auto higherComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareHigherBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareHigherBetterStats)
        { std::cout << "[" << teamA << "]: HIGHER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: HIGHER " << statDescription << std::endl;}
    };

    auto lowerComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareLowerBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareLowerBetterStats)
        { std::cout << "[" << teamA << "]: LOWER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: LOWER " << statDescription << std::endl;}
    };

    std::cout << "[    Pitching Comparison Summary: " << teamA.teamName << " vs " << teamB.teamName << "    ]" << std::endl;
    
    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     Opponent Management     |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Hits Allowed", compareLowerBetterStats(teamA.hitsAllowed, teamB.hitsAllowed), checkForEquality(teamA.hitsAllowed, teamB.hitsAllowed));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Hits Per 9 Innings", compareLowerBetterStats(teamA.h9, teamB.h9), checkForEquality(teamA.h9, teamB.h9));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Home Runs Per 9 Innings", compareLowerBetterStats(teamA.hr9, teamB.hr9), checkForEquality(teamA.hr9, teamB.hr9));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Runs Allowed Per Game", compareLowerBetterStats(teamA.runsAllowedPerGame, teamB.runsAllowedPerGame), checkForEquality(teamA.runsAllowedPerGame, teamB.runsAllowedPerGame));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Earned Runs Allowed", compareLowerBetterStats(teamA.earnedRunsAllowed, teamB.earnedRunsAllowed), checkForEquality(teamA.earnedRunsAllowed, teamB.earnedRunsAllowed));
    lowerComparison(teamA.teamName, teamB.teamName, "ERA", compareLowerBetterStats(teamA.era, teamB.era), checkForEquality(teamA.era, teamB.era));
    lowerComparison(teamA.teamName, teamB.teamName, "ERA (Adjusted)", compareLowerBetterStats(teamA.eraPlus, teamB.eraPlus), checkForEquality(teamA.eraPlus, teamB.eraPlus));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Home Runs Allowed", compareLowerBetterStats(teamA.homeRunsAllowed, teamB.homeRunsAllowed), checkForEquality(teamA.homeRunsAllowed, teamB.homeRunsAllowed));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Walks Per 9 Innings", compareLowerBetterStats(teamA.bb9, teamB.bb9), checkForEquality(teamA.bb9, teamB.bb9));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Strikeouts", compareHigherBetterStats(teamA.strikeouts, teamB.strikeouts), checkForEquality(teamA.strikeouts, teamB.strikeouts));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Strikeouts Per 9 Innings", compareHigherBetterStats(teamA.so9, teamB.so9), checkForEquality(teamA.so9, teamB.so9));
    higherComparison(teamA.teamName, teamB.teamName, "Strikeout-to-Walks Ratio", compareHigherBetterStats(teamA.so_w, teamB.so_w), checkForEquality(teamA.so_w, teamB.so_w));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Intentional Walks", compareHigherBetterStats(teamA.intentionalWalks, teamB.intentionalWalks), checkForEquality(teamA.intentionalWalks, teamB.intentionalWalks));
    higherComparison(teamA.teamName, teamB.teamName, "Total Number of Games in Which 1 or More Pitchers Threw a Shutout", compareHigherBetterStats(teamA.shutoutsByTeam, teamB.shutoutsByTeam), checkForEquality(teamA.shutoutsByTeam, teamB.shutoutsByTeam));
    higherComparison(teamA.teamName, teamB.teamName, "Total Number of Games in Which 2 or More Pitchers Threw a Shutout", compareHigherBetterStats(teamA.shutouts, teamB.shutouts), checkForEquality(teamA.shutouts, teamB.shutouts));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Runners Left on Base", compareHigherBetterStats(teamA.lob, teamB.lob), checkForEquality(teamA.lob, teamB.lob));
    higherComparison(teamA.teamName, teamB.teamName, "Field Independent Pitching", compareHigherBetterStats(teamA.fip, teamB.fip), checkForEquality(teamA.fip, teamB.fip));
    higherComparison(teamA.teamName, teamB.teamName, "WHIP", compareHigherBetterStats(teamA.whip, teamB.whip), checkForEquality(teamA.whip, teamB.whip));
  
    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|    Late-Game Performance    |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Saves", compareHigherBetterStats(teamA.saves, teamB.saves), checkForEquality(teamA.saves, teamB.saves));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Finished", compareHigherBetterStats(teamA.gamesFinished, teamB.gamesFinished), checkForEquality(teamA.gamesFinished, teamB.gamesFinished));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Completed", compareHigherBetterStats(teamA.completeGames, teamB.completeGames), checkForEquality(teamA.completeGames, teamB.completeGames));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     Mistakes and Errors     |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Accidental Walks", compareLowerBetterStats(teamA.walks, teamB.walks), checkForEquality(teamA.walks, teamB.walks));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Batters Hit by Pitch", compareLowerBetterStats(teamA.hitByPitch, teamB.hitByPitch), checkForEquality(teamA.hitByPitch, teamB.hitByPitch));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Balks", compareLowerBetterStats(teamA.balks, teamB.balks), checkForEquality(teamA.balks, teamB.balks));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Wild Pitches", compareLowerBetterStats(teamA.wildPitches, teamB.wildPitches), checkForEquality(teamA.wildPitches, teamB.wildPitches));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|       Other Statistics      |" << std::endl;
    std::cout << "-------------------------------" << std::endl; 
    higherComparison(teamA.teamName, teamB.teamName, "Number of Pitchers Used", compareHigherBetterStats(teamA.numPlayersUsed, teamB.numPlayersUsed), checkForEquality(teamA.numPlayersUsed, teamB.numPlayersUsed));
    higherComparison(teamA.teamName, teamB.teamName, "Average Pitcher Age", compareHigherBetterStats(teamA.averagePitchAge, teamB.averagePitchAge), checkForEquality(teamA.averagePitchAge, teamB.averagePitchAge));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Played", compareHigherBetterStats(teamA.gamesPlayed, teamB.gamesPlayed), checkForEquality(teamA.gamesPlayed, teamB.gamesPlayed));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Wins", compareHigherBetterStats(teamA.wins, teamB.wins), checkForEquality(teamA.wins, teamB.wins));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Losses", compareLowerBetterStats(teamA.losses, teamB.losses), checkForEquality(teamA.losses, teamB.losses));
    higherComparison(teamA.teamName, teamB.teamName, "Win-Loss Percentage", compareHigherBetterStats(teamA.winLossPercentage, teamB.winLossPercentage), checkForEquality(teamA.winLossPercentage, teamB.winLossPercentage));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Innings Pitched", compareHigherBetterStats(teamA.inningsPitched, teamB.inningsPitched), checkForEquality(teamA.inningsPitched, teamB.inningsPitched));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Batters Faced", compareHigherBetterStats(teamA.battersFaced, teamB.battersFaced), checkForEquality(teamA.battersFaced, teamB.battersFaced));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Started", compareHigherBetterStats(teamA.gamesStarted, teamB.gamesStarted), checkForEquality(teamA.gamesStarted, teamB.gamesStarted));
    std::cout << "\n";
}

///////////////////////////////////////
// Team Fielding Comparison Function //
///////////////////////////////////////
/**
 * @brief Function to Compare Team Fielding Stats
 * @param searchVector - Vector to Search
 * @return void
 */
template<>
void compareTeams<teamFielding>(const std::vector<teamFielding>& searchVector)
{
    std::cout << "\n\n--------------------------------" << std::endl;
    std::cout << "|  Team Pitching Comparison Menu  |" << std::endl;
    std::cout << "--------------------------------" << std::endl;

    for (size_t i = 0; i < 30; ++i)
    {
       std::cout << "----------------------------" << std::endl;
       std::cout << i + 1 << ". " << searchVector[i].teamName << std::endl; 
    }
    std::cout << "\n\n";

    int teamA_Index = 0, teamB_Index = 0;

    std::cout << "[+] Enter First Team (or 0 to Exit): ";
    std::cin >> teamA_Index;

    std::cout << "[+] Enter Second Team (or 0 to Exit): ";
    std::cin >> teamB_Index;

    if (teamA_Index == 0 || teamB_Index == 0)
    {
        std::cout << "\n[+] Exiting the Teams Batting Comparison Menu..." << std::endl;
        return;
    }

    if (teamA_Index < 1 || teamA_Index > static_cast<int>(searchVector.size()) || teamB_Index < 1 || teamB_Index > static_cast<int>(searchVector.size()) || teamA_Index == teamB_Index)
    {
        std::cout << "\n[!] ERROR: Invalid Team Index" << std::endl;
        return;
    }

    // Adjust for Zero-Based Index
    teamA_Index -= 1;
    teamB_Index -= 1;

    const auto& teamA = searchVector[teamA_Index];
    const auto& teamB = searchVector[teamB_Index];

    teamA.displayStats();
    teamB.displayStats();

    // Comparison Logic Starts Here //
    auto compareHigherBetterStats = [](auto a, auto b) { return a > b; };
    auto compareLowerBetterStats = [](auto a, auto b) { return a < b; };
    auto checkForEquality = [](auto a, auto b) { return a == b; };

    auto higherComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareHigherBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareHigherBetterStats)
        { std::cout << "[" << teamA << "]: HIGHER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: HIGHER " << statDescription << std::endl;}
    };

    auto lowerComparison = [&](const std::string& teamA, const std::string& teamB, const std::string statDescription, bool compareLowerBetterStats, bool checkForEquality)
    {
        if (checkForEquality)
        { std::cout << "[" << teamA << "] and [" << teamB << "]: SAME " << statDescription << std::endl; }
        else if (compareLowerBetterStats)
        { std::cout << "[" << teamA << "]: LOWER " << statDescription << std::endl;}
        else 
        { std::cout << "[" << teamB << "]: LOWER " << statDescription << std::endl;}
    };

    std::cout << "[    Fielding Comparison Summary: " << teamA.teamName << " vs " << teamB.teamName << "    ]" << std::endl;
    
    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|     Performance Metrics     |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Runs Allowed Per Game", compareLowerBetterStats(teamA.runsAllowedPerGame, teamB.runsAllowedPerGame), checkForEquality(teamA.runsAllowedPerGame, teamB.runsAllowedPerGame));
    higherComparison(teamA.teamName, teamB.teamName, "Defensive Efficiency", compareHigherBetterStats(teamA.defEff, teamB.defEff), checkForEquality(teamA.defEff, teamB.defEff));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|    Participation Metrics    |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Played", compareHigherBetterStats(teamA.gamesPlayed, teamB.gamesPlayed), checkForEquality(teamA.gamesPlayed, teamB.gamesPlayed));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Started", compareHigherBetterStats(teamA.gamesStarted, teamB.gamesStarted), checkForEquality(teamA.gamesStarted, teamB.gamesStarted));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Games Completed", compareHigherBetterStats(teamA.completeGames, teamB.completeGames), checkForEquality(teamA.completeGames, teamB.completeGames));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Innings Played", compareHigherBetterStats(teamA.inningsPlayed, teamB.inningsPlayed), checkForEquality(teamA.inningsPlayed, teamB.inningsPlayed));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|      Fielding Actions       |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Defensive Chances Taken", compareHigherBetterStats(teamA.defensiveChances, teamB.defensiveChances), checkForEquality(teamA.defensiveChances, teamB.defensiveChances));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Putouts", compareHigherBetterStats(teamA.putOuts, teamB.putOuts), checkForEquality(teamA.putOuts, teamB.putOuts));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Assists", compareHigherBetterStats(teamA.assists, teamB.assists), checkForEquality(teamA.assists, teamB.assists));
    lowerComparison(teamA.teamName, teamB.teamName, "Number of Errors", compareLowerBetterStats(teamA.errors, teamB.errors), checkForEquality(teamA.errors, teamB.errors));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Double Plays Turned", compareHigherBetterStats(teamA.doublePlaysTurned, teamB.doublePlaysTurned), checkForEquality(teamA.doublePlaysTurned, teamB.doublePlaysTurned));
    higherComparison(teamA.teamName, teamB.teamName, "Fielding Percentage", compareHigherBetterStats(teamA.fieldingPercentage, teamB.fieldingPercentage), checkForEquality(teamA.fieldingPercentage, teamB.fieldingPercentage));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|       Defensive Value       |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Zone Runs Above Average", compareHigherBetterStats(teamA.rtot, teamB.rtot), checkForEquality(teamA.rtot, teamB.rtot));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Zone Runs Above Average Per 1200 Innings", compareHigherBetterStats(teamA.rtot_yr, teamB.rtot_yr), checkForEquality(teamA.rtot_yr, teamB.rtot_yr));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Defensive Runs Saved", compareHigherBetterStats(teamA.defensiveRunsSaved, teamB.defensiveRunsSaved), checkForEquality(teamA.defensiveRunsSaved, teamB.defensiveRunsSaved));
    higherComparison(teamA.teamName, teamB.teamName, "Number of Defensive Runs Saved Per 1200 Innings", compareHigherBetterStats(teamA.defensiveRunsSavedYr, teamB.defensiveRunsSavedYr), checkForEquality(teamA.defensiveRunsSavedYr, teamB.defensiveRunsSavedYr));

    std::cout << "\n";
    std::cout << "-------------------------------" << std::endl;
    std::cout << "|       Other Statistics      |" << std::endl;
    std::cout << "-------------------------------" << std::endl;
    higherComparison(teamA.teamName, teamB.teamName, "Number of Fielders Used", compareHigherBetterStats(teamA.numPlayersUsed, teamB.numPlayersUsed), checkForEquality(teamA.numPlayersUsed, teamB.numPlayersUsed));
    std::cout << "\n";
}
#endif
