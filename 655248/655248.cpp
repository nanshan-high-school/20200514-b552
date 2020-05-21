#include <iostream>
#include <vector>
using namespace std;

int main() {
    /*vector<int> number={};
    for
    cout << number.front() << "\n";
    cout <<number.back();*/
    char input[10] = {0};
    vector<int> vecNum[100];
    int temp;
    int num = 0;
    int bufferPrime = 0;
    long long prime[10] = {0};
    int primeAmount = 0;
    char test = 0;
    long long bufferITR = 0;
    int trynum =0;
    int endFlag = 0;
    cout << "輸入'e'表示已結束" << "\n";
    do{
        if (endFlag==1){
            num--;
            break;
        }
        for (int i = 0; i < 10; i++){
            cin >> input[i];
            if (input[i]=='e'){
                endFlag=1;
                break;               
            }
            vecNum[num].push_back(input[i]- '0');
        }
        /*for (vector<int>::iterator itr = vecNum[num].begin(); itr !=  vecNum[num].end(); ++itr){
            cout << *itr << endl;
        }*/
        num++;    
    }while(num <= 99);
    for(int h = 0; h < num; h++){
        for (vector<int>::iterator itr = vecNum[h].begin(); itr !=  vecNum[h].end(); ++itr){
            bufferITR = (bufferITR * 10) + (long long )*itr;
            primeAmount=0;
            for (long long  i = 1; i <= bufferITR/2; i++){
                if (bufferITR%i == 0){
                primeAmount++;
                }
            }
            if(primeAmount == 1){
                prime[bufferPrime] = bufferITR;
                bufferPrime++;
                bufferITR = 0;
            }
        }
        cout << bufferPrime << '\n';
        for(int i = 0; i < 10; i++){
            
            cout  << prime[i] << '\n';
        }
        cout << '\n';
        bufferITR = 0;
        primeAmount = 0;
        bufferPrime = 0;
    }
    /*for(int i = 0; i < num; i++){
        for(int j = 0; j < 10; j++){
            bufferPrime = vecNum[i][j];
            
        }
    }
 
    for (int i = 0; i < num; i++){
        for(int j = 0; j < 10; j++){
            cout << vecNum[i][j];
        }
    }
 


}
    for (vector<int>::iterator itr = vecNum.begin(); itr != vecNum.end(); ++itr)
    {
        cout << *itr << endl;
    }*/
    
}    
