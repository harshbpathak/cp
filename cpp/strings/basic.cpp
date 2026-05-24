#include <iostream>
#include <typeinfo>
using namespace std;
int main(){
    string s1;
    cout << "Enter a string: ";
    getline(cin, s1); // read string with spaces
    cout << "You entered: ";
    cout << s1;
    cout<< endl; // print string
    // cout << s1.length() << endl; // length of string
    // cout << s1.size() << endl; // size of string
    // cout << s1.capacity() << endl; // capacity of string
    // cout << s1.max_size() << endl; // maximum size of string
    // cout << s1.empty() << endl; // check if string is empty
    // cout << s1[0] << endl; // first character of string
    // cout << s1.at(0) << endl; // first character of string using at()
    // cout << s1.front() << endl; // first character of string using front()  
    // cout << s1.back() << endl; // last character of string using back()
    // cout << s1.substr(0, 5) << endl; // substring from index 0 to 5
    // cout << s1.find("string") << endl; // find the first occurrence of "string"
    // cout << s1.rfind("string") << endl; // find the last occurrence of "string"
    // cout << s1.replace(0, 6, "new") << endl; //

    /*comparing strings*/
    /* string s2= "Hello";
    if (s2>s1) {
        cout << s2 << " is greater than " << s1 << endl;
    }
    else if (s2<s1) {
        cout << s2 << " is less than " << s1 << endl;
    }
    else {
        cout << s2 << " is equal to " << s1 << endl;
    }   
    cout <<s2.compare(s1) << endl; // compare two strings
    cout << s1.compare(s2) << endl; // compare two strings
    cout<< s1.compare(s1)<< endl;*/

    //string swapping
    // string s2 = "World";
    // cout << "Before swapping: " << s1 << " " << s2 << endl;
    // //swap(s1, s2);
    // string temp=s1;
    // s1=s2;
    // s2=temp;
    // cout << "After swapping: " << s1 << " " << s2 << endl;

    //reverse a string
    // string s2="";
    // for (int i=s1.length()-1;i>=0;i--){
    //     cout << s1[i]; // print each character in reverse order
    //     s2+=s1[i];
    // }
    // cout << "Reversed string: " << s2 << endl;
    string s2 = "string";
    while (s1.find("string")!=string::npos) // copy string
    {
        s2 += s1[s1.find("string")];
        s1.replace(s1.find("string"), 6, "newstring");
    }
    cout<< "Modified string :"<< s1 << endl;

}
