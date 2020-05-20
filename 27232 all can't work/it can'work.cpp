#include <iostream>
#include <vector>
using namespace std;
int main() {
    string a;
    int b[1000];
    int n;
    bool z;
    vector <int> num;
    cin >> a;
    for (int c = 0; c < a.length(); c++){
        for (int d = 2 ; d < a[c] + 1; d++){
            n = a[c] % d;
            if (n == 0 && a[c] != 2){
                z = false;
                break;
            } 
        }
        if (z){
            num.push_back(a[c]);
        }
    }
    for (int m = 0; m < num.size(); m++){
        cout << num[m];
    }
}
