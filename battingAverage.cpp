// Programmer: Diego Hernandez
//
// Purpose: Write a program that will calculate the batting average
//          of three baseball players
//
// Start
//
//      Input: Prompt user to enter the name of 3 players
//             Wait for user to enter the name of the three players
//      
//      Programming: battingAverage1 = (player1Hits / player1Bats);
//                   battingAverage2 = (player2Hits / player2Bats);
//                   battingAverage3 = (player3Hits / player3Bats);
//      
//      Output: Display the names, hits, at bats, and batting average
//              for each player formatted unto a table with title and 
//              column headings
//      
// Stop
//

#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

int main()
{

    string player1, player2, player3;
    int player1Hits, player2Hits, player3Hits;
    double player1Bats, player2Bats, player3Bats;
    double battingAverage1, battingAverage2, battingAverage3;

    cout << "Welcome to the batting range\n \n";
    cout << "Enter the name of each player\n";
    cout << "Enter player 1: ";
    getline(cin, player1);
    cout << "Enter player 2: ";
    getline(cin, player2);
    cout << "Enter player 3: ";
    getline(cin, player3);
    cout << endl;

    cout << "Separated by a space, enter the number of hits and at bats for " << player1 << ": ";
    cin >> player1Hits >> player1Bats;
    cout << "Separated by a space, enter the number of hits and at bats for " << player2 << ": ";
    cin >> player2Hits >> player2Bats;
    cout << "Separated by a space, enter the number of hits and at bats for " << player3 << ": ";
    cin >> player3Hits >> player3Bats;
    cout << endl << endl;

    battingAverage1 = (player1Hits / player1Bats);
    battingAverage2 = (player2Hits / player2Bats);
    battingAverage3 = (player3Hits / player3Bats);

    cout << "Batting Stats and Averages:\n"
         << endl;
    // cout << right << setw(30) << "Hits " << setw(15) << "At Bats " << setw(20) << "Batting average \n"
    //  << endl;
    cout << "Players: "
         << right << setw(23) << "Hits " << setw(14) << "At Bats " << setw(20) << "Batting average \n"
         << endl;
    cout << setw(11) << left << player1 << right << setw(20) 
         << player1Hits << setw(12) 
         << player1Bats << setw(15) 
         << setprecision(2) << battingAverage1 << endl;
    cout << setw(11) << left << player2 << right << setw(20) 
         << player2Hits << setw(12) << static_cast<int>(player2Bats) << setw(15) 
         << setprecision(2) << battingAverage2 << endl;
    cout << setw(11) << left << player3 << right << setw(20) 
         << player3Hits << setw(12) << static_cast<int>(player3Bats) 
        << setw(15) << setprecision(2) << battingAverage1 << endl;

    return 0;
}