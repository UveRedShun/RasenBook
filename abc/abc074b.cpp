#include <bits/stdc++.h>
using namespace std;

int main(){

    cout << "xy平面状にあるボールの個数を入力してください" << endl;
    int N;
    cin >> N;

    cout << "ロボットBを配置するx軸の値を入力してください。" << endl;
    int K;
    cin >> K;

    //移動距離の合計
    int sum = 0;
    // x : ボールがあるx軸の値
    int x, i = 0;
    cout << "ボールがあるx軸の値を入力してください。" << endl;
    while(i < N){
        cin >> x;
        if(x < K - x){
            sum += x*2;
        }else{
            sum += (K - x)*2;
        }
        i++;
    }
    cout << "総移動距離 : ";
    cout << sum << endl;
}