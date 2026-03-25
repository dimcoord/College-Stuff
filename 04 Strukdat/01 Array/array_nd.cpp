#include <iostream>
using namespace std;

int main() {
    int buah[2][4][4] = {
        {
            {1,2,3,4},
            {5,6,7,8},
            {9,10,11,12},
            {13,14,15,16}
        },
        {
            {21,22,23,24},
            {25,26,27,28},
            {29,30,31,32},
            {33,34,35,36}
        }
    };

    for (int i = 0; i < 2; i++) {
        cout << "Layer ke : " << i << endl;
         for (int j = 0; j < 4; j++) {
            for (int k = 0; k < 4; k++) {
                cout << buah[i][j][k] << " ";
            }
            cout << endl;
         }
         cout << endl;
    }
    return 0;
}