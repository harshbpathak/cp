#include <iostream>
using namespace std;
int add(int a, int b){
    cout << a+b;
}
float add(float a, float b){
    cout << a+b;
}
string add(string a, string b){
    cout << a+b;
}
bool checkarm(int x){
    int sum=0, temp=x , rev=0;
    while (x>0){
        int r=x%10;
        sum+=r*r*r;
        x/=10;
    }
    if (sum==temp) return true; else return false;
}
int factorial(int n){
    if (n==0 || n==1) return 1;
    else return n*factorial(n-1);
}
int main(){
    // int x, y;
    // cout << "Enter two integers: ";
    // cin >> x >> y;
    // add(x, y); // calls the integer version of add
    // cout << endl;

    // float m, n;
    // cout << "Enter two floats: ";
    // cin >> m >> n;
    // add(m, n); // calls the float version of add
    // cout << endl;

    // string s1, s2;
    // cout << "Enter two strings: ";
    // getline(cin >> ws, s1);
    // cout << "Enter the other string:";
    // getline(cin >> ws, s2);
    // add(s1, s2); // calls the string version of add
    // cout << endl;
    int x;
    cout << "enter a number:";
    cin>>x;
    if (checkarm(x)==1){
        cout<<x<<" is an armstrong number.";
    } else {
        cout<<x<<" is not an armstrong number.";
    }
    cout << "Factorial of " << x << " is: " << factorial(x) << endl;

}