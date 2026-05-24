#include <iostream>
using namespace std;
//Function to calculate area and perimeter
void calculateRectangle(int length, int width) {
    int area = length * width;
    int perimeter = 2 * (length + width);
    cout << "Area: " << area << endl;
    cout << "Perimeter: " << perimeter << endl;
}

// Function to handle array operations
void arrayOperations() {
    const int size = 5;  // Reduced size for easier testing
    int arr[size];

    // Input array elements
    cout << "Enter " << size << " integers:" << endl;
    for(int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    
    // Display array elements
    cout << "Array elements: ";
    for(int i = 0; i < size; i++) {
        cout << arr[i];
        if(i < size - 1) cout << ", ";
    }
    cout << endl;
}

// Function to demonstrate arithmetic operations
void arithmeticDemo() {
    int var1 = 10, var2 = 20, var3 = 30;
    float result;
    
    result = var1 - var2 + var3;  // Demonstrates operator precedence
    cout << "Result of " << var1 << " - " << var2 << " + " << var3 << " = " << result << endl;
}
void rangecheck(int num, int up, int low){
    if (num>= low && num <= up){
        cout << num << " is in the range [" << low << ", " << up << "]\n";
    } else {
        cout << num << " is not in the range [" << low << ", " << up << "]\n";
    }
}
void checkvowel(char ch) {
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        cout << ch << " is a vowel.\n";
    } else {
        cout << ch << " is not a vowel.\n";
    }
}

int main() {
int choice;
    
    do {
        cout << "\nMenu:\n";
        cout << "1. Calculate Rectangle Properties\n";
        cout << "2. Array Operations\n";
        cout << "3. Arithmetic Operations\n";
        cout << "4. Exit\n";
        cout << "5. To check odd or even no. \n";
        cout << "6.To check if the num is in a given range \n";
        cout << "7. To check if the characters is a vowel or not \n";
        cout << "Enter your choice (1-6): ";
        cin >> choice;
        
        switch(choice) {
            case 1:
                int length, width;
                cout << "Enter length: ";
                cin >> length;
                cout << "Enter width: ";
                cin >> width;
                calculateRectangle(length, width);
                break;
                
            case 2:
                arrayOperations();
                break;
                
            case 3:
                arithmeticDemo();
                break;
                
            case 4:
                cout << "Exiting program...\n";
                break;
            case 5:
                int num;
                cout<< "Enter the number to check : ";
                cin>> num;
                if (num%2==0){
                    cout<< num << " is an even number \n";
                }else{ 
                    cout << num << " is an odd number \n";
                }
                break;    
            case 6:
                int number, upper, lower;
                cout << "Enter a number to check: ";
                cin >> number;
                cout << "Enter the upper limit of the range: ";
                cin >> upper;
                cout << "Enter the lower limit of the range: ";
                cin >> lower;
                rangecheck(number, upper, lower);
                break;
            case 7:
                char ch ;
                cout << "Enter a character to check if it's a vowel: ";
                cin >> ch;
                checkvowel(ch);
                break;
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }
    while(choice != 4);
    
    return 0;
}