#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int main() {
    string num;
    cin >> num;

    for (int i = 0; i < 10; i++) {
        num[i] -= '0';
    }
    
    bool prime;
    vector<int> output;
    long long temp = 0;
    int amount = 0;


    for (int i = 0; i < 10; i++) {
        temp += num[i];
        prime = true;

        for (int j = 2; j <= sqrt(temp); j++) {
            if (temp % j == 0) {
                prime = false;
            } else {
                continue;
            }
        }

        if (temp == 1 || temp == 0) {
            prime = false;
        }

        if (prime) {
            amount++;
            output.push_back(temp);
            temp = 0;
        } else {
            temp *= 10;
        }     
    }

    cout << amount << endl;
    for (auto n : output) {
        cout << n << endl;
    }
}
