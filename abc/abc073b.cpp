#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "来場した組数を入力してください" << endl;
    // 入場者数
    int N;
    cin >> N;
    // 結果変数
    int result = 0;

    int i;
    for(i=0; i < N; i++){
        int l, r;
        cin >> l >> r ;
        if(l < r && 0 < l){
            result += (r - l) + 1;
        } else{
            cout << "数値が正しく入力されていません、再度入力してください。" << endl;
            i--;
        }
    }
    cout << result << endl;
}
