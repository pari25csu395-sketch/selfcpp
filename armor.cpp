#include <iostream>
using namespace std;

int main() {
    int inventory [2][2], rewards [2][2], result [2][2];

    cout << "Enter current inventory (2*2):" << endl;
    for (int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            cin >> inventory[i][j];
        }
    }

    cout << "Enter rewards (2*2):" << endl;
    for ( int i = 0 ; i < 2 ; i++){
        for (int j  = 0 ; j < 2 ; j++){
            cin >> rewards[i][j];
        }
    }

    cout << "results:" << endl;
    for (int i = 0 ; i < 2 ; i ++){
        for (int j = 0 ; j < 2 ; j ++){
            result [i][j] = inventory[i][j] + rewards[i][j];
        }
    }

    cout << "Current inventory:";
    for ( int i = 0 ; i < 2 ; i++){
        cout << "[ ";
        for (int j = 0 ; j < 2 ; j++){
            cout << inventory[i][j] << endl;
            cout << "]\n";
        }
    }

    cout << "Mission Rewards:";
    for ( int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            cout << rewards[i][j] << endl;
    
        }
    }

    cout << "Updates inventory:";
    for ( int i = 0 ; i < 2 ; i++){
        for (int j = 0 ; j < 2 ; j++){
            cout << result[i][j] << endl;
        }
    }



return 0;
}