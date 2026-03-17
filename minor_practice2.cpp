#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number of which u want a square matrix:" << endl;
    cin >> n;

    int sqmatrix [n][n] ;

    cout << "Enter the elements of sqmatrix of (n*n) :" << endl;
    for (int i = 0 ; i < n ; i ++){
        for (int j = 0 ; j < n ; j ++){
            cin >> sqmatrix[i][j];
        }
    }
    int sum  = 0;
    
    for ( int i = 0 ; i < n ; i ++){
        sum += sqmatrix[i][i];
    }
    cout << "diagonal sum:" << sum;


return 0;
}