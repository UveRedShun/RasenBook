#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "操作を行う回数を入力してください。" << endl;
    int N;
    cin >> N;

    cout << "整数を1つ入力してください。" << endl;
    int K;
    cin >> K;

    // 電光掲示板に表示されている数値
    int num = 1;

    int i;
    for(i=0; i<N; i++){
        if(num*2-num<K){
            num *= 2;
        }else{
            num += K;
        }
    }
    cout << num << endl;
}