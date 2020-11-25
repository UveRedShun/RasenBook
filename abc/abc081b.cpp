#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "正の整数の個数を入力してください" << endl;
    int N;
    cin >> N;

    int i, num;
    int minCount = 0; //割り切れる最小値
    int tmp = 0; //計算途中の仮置き変数
    int oddCount = 0;
    for(i = 0; i < N; i++){
        cin >> num;
        if(num % 2 != 0){
            oddCount++;
        }
        while(num % 2 == 0){
            num /= 2;
            tmp++;
        }
        if(minCount!=0){
            minCount = (minCount < tmp) ? minCount : tmp;
        }else{
            minCount = tmp;
        }
        tmp = 0;
    }
    if(oddCount!=0){
        cout << 0 << endl;
    }else{
        cout << minCount << endl;
    }
}