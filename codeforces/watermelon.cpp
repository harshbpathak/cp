#include<iostream>
using namespace std;

bool is_equalparts(int weight){
    for (int i=1; i<weight; i++){
        int r=weight-i;
        if (r%2==0 && i%2==0){
            return true;
        }
    return false;

    }

}
int main(){
    int w;
    cin >> w;
    bool is_good;
    is_good=is_equalparts(w);
    if (is_good) cout << "YES";
    else cout << "NO";
    return 0;
}