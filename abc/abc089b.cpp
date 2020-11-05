#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "袋の中の雛あられの個数を入力してください。" << endl;
    int N;
    cin >> N;
    cout << "袋の中の雛あられを入力してください。" << endl;

    // trueならthree, falseならfour
    bool three = true;

    for (int i = 0; i < N; i++) 
    {
        char arare;
        cin >> arare;

        if (arare == 'Y') {
            three = false; 
        }
    }

    if (three) {
        cout << "Three" << endl;
    } else {
        cout << "Four" << endl;
    }
}