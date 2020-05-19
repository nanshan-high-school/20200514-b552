#include <iostream>
#include <vector>
using namespace std;

int main() {
    string input;
    cin >> input;

    for (int i = 0; i < 10; i++) {
        input[i] -= '0';
    }

    vector<int> primeNum;
    int answer = 0;
    long long num = 0;
    bool prime;
    for (int i = 0; i < 10; i++) {
        num += input[i];
        prime = true;
        for (int j = 2; j < num; j++) {
            if (num % j == 0) {
                prime = false; 
            }
        }

        if ((num == 1) || (num == 0)) {
            prime = false;
        }

        if (prime) {
            answer++;
            primeNum.push_back(num);
            num = 0;
        } else {
            num *= 10;
        }
    }

    cout << answer << "\n";
    for (int i = 0; i < primeNum.size(); i++) {
        if (primeNum[i] != 0) {
            cout << primeNum[i] << "\n";
        }
    }
}