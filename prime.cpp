#include <iostream>
#include <vector>
#include <math.h>
using namespace std;
bool isPrime(long long number);

int main() {
    string num;
    cin >> num;

    int number[10];
    for (int i = 0; i < 10; i++) {
        number[i] = num[i] - 0x30;
    }

    int total = 0;
    long long t_number = 0;
    vector<long long> totalNum;

    for (int i = 0; i < 10; i++) {
        t_number = t_number * 10 + number[i];

        if (isPrime(t_number)) {
            total += 1;
            totalNum.push_back(t_number);

            t_number = 0;
        }
    }

    cout << total << "\n";
    for (int i = 0; i < totalNum.size(); i++) {
        cout << totalNum[i] << "\n";
    }
}

bool isPrime(long long number) {
    bool ret = true;

    if (number == 1 || number == 0) {
        return false;
    }

    double input;
    int text;
    input = sqrt(number);

    for (int j = 2; j <= input; j++) {
        text = number % j;

        if (text == 0) {
            return false;
        }
    }
    return ret;
}