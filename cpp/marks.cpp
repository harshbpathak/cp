#include <iostream>
using namespace std;
void checkgrad(int marks){
    if (marks >=80 && marks <=100){
        cout<< "A";
    } else if (marks >= 60 && marks < 80) {
        cout << "B";
    } else{
        cout<<"C";
    }
}
int main(){
    int marks;
    cout << "Enter your marks :";
    cin  >> marks;
    checkgrad(marks);
    int i=0;
    for  (i=5;i>0;i--){
        cout <<" "<< i<< " ";
    }
}
