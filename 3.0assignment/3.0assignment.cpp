//created by nick ls
//created on 4/6/2017

#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class Score {
    
    public:
        void SetScore(int score);
        void AddOneToScore();
        int GetScore() const;
        int tempStoredScore;
    private:
        int storedScore;
};

void Score::AddOneToScore() {
    storedScore = storedScore + 1;
    return;
}

void Score::SetScore(int score) {
    storedScore = score;
    return;
}

int Score::GetScore() const {
    return storedScore;
}

int main() {
    
    Score player;
    Score cpu;
    
    int numRounds = 0;
    
    int playerChoice;
    int cpuChoice;
    
    
    
    
        cout << "Please enter the number of rounds you wish to play the best out of: " << endl;
        cin >> numRounds;
        
        while (numRounds != 0) {
            cout << "Please enter 1 for rock, 2 for paper, 3 for scissors, 4 for lizard, or 5 for spock" << endl;
            cin >> playerChoice;               //having the user input their choice
            
            srand(time(0));
            cpuChoice = ((rand() % 5) + 1);
            
            
            if (playerChoice == 1) {
                switch (cpuChoice) {
                    case 1:
                        cout << "You and the CPU both chose rock and tied this round!" << endl;
                        break;
                    case 2:
                        cout << "You chose rock and the CPU chose paper, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 3:
                        cout << "You chose rock and the CPU chose scissors, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 4:
                        cout << "You chose rock and the CPU chose lizard, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 5:
                        cout << "You chose rock and the CPU chose spock, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                }
            }
            else if (playerChoice == 2) {
                switch (cpuChoice) {
                    case 1:
                        cout << "You chose paper and the CPU chose rock, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 2:
                        cout << "You and the CPU both chose paper and tied this round! No points awarded" <<endl;
                        break;
                    case 3:
                        cout << "You chose paper and the CPU chose scissors, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 4:
                        cout << "You chose paper and the CPU chose lizard, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 5:
                        cout << "You chose paper and the CPU chose spock, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                }
            }
            else if (playerChoice == 3) {
                switch (cpuChoice) {
                    case 1:
                        cout << "You chose scissors and the CPU chose rock, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 2:
                        cout << "You chose scissors and the CPU chose paper, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 3:
                        cout << "You and the CPU both chose scissors and tied this round! No points awarded" <<endl;
                        break;
                    case 4:
                        cout << "You chose scissors and the CPU chose lizard, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 5:
                        cout << "You chose scissors and the CPU chose spock, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                }
            }
            else if (playerChoice == 4) {
                switch (cpuChoice) {
                    case 1:
                        cout << "You chose lizard and the CPU chose rock, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 2:
                        cout << "You chose lizard and the CPU chose paper, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 3:
                        cout << "You chose lizard and the CPU chose scissors, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 4:
                        cout << "You and the CPU both chose lizard and tied this round! No points awarded" <<endl;
                        break;
                    case 5:
                        cout << "You chose lizard and the CPU chose spock, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                }
            }
            else if (playerChoice == 5) {
                switch (cpuChoice) {
                    case 1:
                        cout << "You chose spock and the CPU chose rock, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 2:
                        cout << "You chose spock and the CPU chose paper, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 3:
                        cout << "You chose spock and the CPU chose scissors, you win this round!" <<endl;
                        player.AddOneToScore();
                        break;
                    case 4:
                        cout << "You chose spock and the CPU chose lizard, you lose this round!" <<endl;
                        cpu.AddOneToScore();
                        break;
                    case 5:
                        cout << "You and the CPU both chose spock and tied this round! No points awarded" <<endl;
                        break;
                }
            }
            else {
                cout << "You didn't enter an integer from 1 through 5" << cout;
            }
                
        numRounds = numRounds - 1;
        
        }
     
     cout << "end" << endl;
    
    return 0;
}