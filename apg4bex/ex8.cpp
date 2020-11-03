#include <bits/stdc++.h>
using namespace std;

int main() {
    int p;
    int price;
    string text;
    cout << text << "パターンを入力してください(1 or 2)" << endl;
    cin >> p;
    
    // パターン1
    if (p == 1) {
        cout << text << "値段を入力してください" << endl;
        cin >> price;
    }
    
    // パターン2
    if (p == 2) {
        cout << "テキストを入力してください" << endl;
        cin >> text;
        cout << "値段を入力してください" << endl;
        cin >> price;
    }
    
    int N;
    cout << "個数を入力してください" << endl;
    cin >> N;
    
    if(p== 2){
        cout << text << "!" << endl;
    }
    cout << price * N << endl;
}