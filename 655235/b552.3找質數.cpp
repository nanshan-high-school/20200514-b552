#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num;
    cout << "數字組數：";
    cin >> num;

    string input[num];
    vector<int> check[num];
    for (int i = 0; i < num; i++) {
        cin >> input[i];
        for (int j = 0; j < 10; j++) {
            input[i][j] -= '0';
            check[i].push_back(input[i][j]);
        }
    } 

    vector<int> N[num];
    bool P;
    bool E = false;
    vector<int> prime[num];
    for (int i = 0; i < num; i++) {
        int now = 0;
        for (int j = 0; j < 10; j++) {
            P = true;
            now += check[i][j];
            if (now == 1 || now == 0) {
                P = false;
            }
            for (int k = 2; k < now; k++) {
                if (now % (k^1/2) == 0) {
                    P = false;
                    break;
                }
            }
            if (P) {
                E = true;
                N[i].push_back(0);
                prime[i].push_back(now);
                now = 0;
            } else {
                now *= 10;
            }
            
        }
        if (E == false) {
            prime[i].push_back(0);
        }
    }
    for (int i = 0; i < num; i++) {
        cout << N[i].size() << "\n";
        for (int j = 0; j < N[i].size(); j++) {
            cout << prime[i][j] << "\n";
        }
        cout << "\n";
    }
}