#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    string num;
    cin >> num;

    vector<long long> primeNum;
    long long numTemp2 = 0;

    for(int i = 0; i < 10; i++) {
        long long numTemp = num[i] - '0';
        int numTempTemp = numTemp;
        numTemp += numTemp2;
        bool prime = true;
        if(numTemp == 0 || numTemp == 1){
            prime = false;
        }
        else if(numTemp == 2 || numTemp == 3 || numTemp == 5 || numTemp == 7){
            prime = true;
        }
        else{
            for(int j = 2; j < sqrt(numTemp) + 1; j++){
                if(numTemp % j == 0){
                prime = false;
                }
            }
        }
        if(prime == true){
            primeNum.push_back(numTemp);
            numTemp2 = 0;
        }
        else{
            numTemp2 *= 10;
            numTemp2 += numTempTemp * 10;
        } 
    }
    cout << primeNum.size() << endl;
    for(auto n : primeNum){
        cout << n << "\n";
    }
}