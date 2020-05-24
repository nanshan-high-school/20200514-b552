#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {

    vector<long long> num;
    vector<long long> primenum;
    long long ifnumber = 0;

    string input;
    cout << "enter input ";
    cin  >> input;

    for (int i = 0; i < 10; i++) {
        int change = input[i] - 48;
        num.push_back(change);
    }

    for (int i = 0; i < 10; i++) {
        bool prime = 1;
        long long scapegoat = num.at(i);
        
        scapegoat += ifnumber;

        if (scapegoat == (1 | 0)) {
            prime = 0 ;
        } else if (scapegoat == (2 | 3 | 5 | 7 )) {
            prime = 1;
        } else {
            for (int j = 2; j < sqrt(scapegoat) + 1; j++) {
                if (scapegoat % j == 0) {
                    prime = 0;
                }
            }
        }

        if (prime == 1){
            primenum.push_back(scapegoat);
            ifnumber = 0;
        } else {
            ifnumber *= 10;
            ifnumber += num.at(i) * 10;
        }
    }

    cout << primenum.size() << endl;
    
    for(auto n : primenum) {
        cout << n << "\n";
    }
}
