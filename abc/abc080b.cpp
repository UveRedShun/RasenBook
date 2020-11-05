#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "自然数を入力してください。" << endl;
    int N;
    cin >> N;

    //各桁の和を格納
    int sum = 0;
    //自然数 : naturalNumber(計算用複製)
    int nN = N;
    //各桁の和を求める
    while(nN>10){
        sum += nN % 10;
        nN = nN / 10;
    }
    //最後の桁を足す
    sum += nN;

    // ハーシャッド数判定
    if(N % sum == 0){
        cout << "Yes" << endl;
    }else{
        cout << "No" << endl;
    }
}