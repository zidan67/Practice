#include <iostream>
using namespace std;
bool PrimeNumber(int number) {
    if (number <= 1) {
        return false;
    }
    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}
int main() {
    int Array[4][5];
    cout << "Enter values for the 2D array (4x5):" << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 5; j++) {
            cout << "Enter value for array["<<i<<"]["<<j<<"]:";
            cin >> Array[i][j];
        }
    }
    int MaxRow1=Array[0][0];
    for (int j = 0; j < 5; ++j) {
        if (Array[0][j]>MaxRow1) {
            MaxRow1 = Array[0][j];
        }
    }
    int MinRow2 = Array[1][0];
    for (int j = 0; j < 5; ++j) {
        if (Array[1][j] < MinRow2) {
            MinRow2 = Array[1][j];
        }
    }
    cout<<endl<<"Even numbers from row 3:";
    for (int j = 0; j < 5; ++j) {
        if (Array[2][j] % 2 == 0) {
            cout << Array[2][j] << ",";
        }
    }
    cout<<endl<<"Prime numbers from row 4:";
    for (int j=0; j < 5; ++j) {
        if(PrimeNumber(Array[3][j])) {
            cout << Array[3][j] <<",";
        }
    }
    cout<<endl<<"Maximum from row 1: "<<MaxRow1<<endl;
    cout<<"Minimum from row 2: "<<MinRow2<<endl;

}

