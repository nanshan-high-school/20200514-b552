#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    long long b,a = 0;
    int number[10] = {0};
    vector<int> answer;
    bool check;

    cin >> b;

    for(int i = 9; i >= 0; i--){
        number[i] = b % 10;
        b /= 10;
    }

    for(int i = 0; i <= 9; i++){
        check = true;
        a *= 10;
        a += number[i];
        if(a == 1){
            continue;
        }
        for(int j = 2; j <= sqrt(a); j++){
            if(a % j == 0){
                check = false;
                break;
            }
        }
        if(check == true){
            answer.push_back(a);
            a = 0;
        }
    }
    cout << answer.size() << "\n";
    if(answer.size() > 1){
        for(int i = 0; i <= answer.size() - 1; i++){
            cout << answer[i] << "\n";
        }
    }
    cout << "\n";
}
