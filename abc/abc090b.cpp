#include <bits/stdc++.h>
using namespace std;

int main(){
    int A,B;
    cin >> A >> B;
    // 1の位の数を格納
    int tmp = 0;
    int i = 0;
    for(i=A;i<B;i++){
        int reverse = 0; //回文を格納する変数
        int remind = 0; //1の位を一時的に保持する変数
        tmp = i;
        // 1の位が0の場合、回文になり得ないため除外
        if(tmp % 10 != 0){
            // 1の位が抽出できなくなるまで
            while(tmp != 0){
                remind = tmp % 10;
                reverse = reverse * 10 + remind;
                tmp /= 10;
            }
            if(reverse == i){
                cout << reverse << "は回文です。" << endl;
            }
        }
    }
}