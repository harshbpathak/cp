#include <iostream>
using namespace std;
int main(){
    int n;
    for (n=0;n<10;n++){
        for (int i=0;i<n+1;i++){
            cout << "* " << ends;
        }
        cout << endl;
    }
    for (n=10;n>0;n--){
        for (int i=0;i<n+1;i++){
            cout <<"* " << ends;
        }
        cout << endl;
    }    
}