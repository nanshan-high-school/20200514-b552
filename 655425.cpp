#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    string num;
    int num2[1000] = {0};
    cin >> num;

    for (int i = 0; i < num.size(); i++){
        num2[i] = num[i] - '0';
        //cout << "顯示 num2" << num2[i] << "\n";
        }
    
    int num3[1000] = {0};
    int yes = 0;
    int temp = 0;
    for (int i = 0; i < num.size(); i++){
        if (num2[i] > 2){
            for (int k = 2; k < num2[i]; k++){
                // cout << "值" << num2[i] % k << "\n";
                if (num2[i] % k == 0){
                    yes = 1;
                    break;
                    //no
                }
                else {
                    yes = 0;
                    //yes
                }
            //cout << "YES:" << yes << "\n";
            }
        }
        else if (num2[i] == 2){
            yes = 0;
        }
        else {
            yes = 1;
        }
        if (yes == 1){
            temp += num2[i] * 10;
            //cout << "temp:" << temp << "\n";
        }
        else {
            num3[i] = num2[i] + temp;
            temp = 0;
        }
    }
    for (int i = 0; i < num.size(); i++){
        if (num3[i] != 0){
            cout << "質數:" <<num3[i] << "\n";
        }
    }
}
