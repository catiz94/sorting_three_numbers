#include <iostream>
using namespace std;

int main(){

// My program to have three numbers in sequence... not matter your input.

    cout << "Type three numbers: ";
    int n1 = 10;
    int n2 = 20;
    int n3 = 30;

    cin >> n1;
    cin >> n2;
    cin >> n3;

    if(n1 < n2 && n1 < n3){
    cout << n1 << " ";
            if(n2 < n3){
                cout << n2 << " " << n3;
            }else {
                cout << n3 << " " << n2;
            }
    }
    else if(n2 < n1 && n2 < n3){
    cout << n2 << " ";
            if(n1 < n3){
                cout << n1 << " " << n3;
            }else {
                cout << n3 << " " << n1;
            }
    }
    else if(n3 < n1 && n3 < n2){
     cout << n3 << " ";   
            if(n1 < n2){
            cout << n1 << " " << n2;
            }else {
                cout << n2 << " " << n1;
            }
    }
    else if(n1 == n2 && n3 < n1){
        cout << n3 << " " << n2 << " " << n1;   
    }
    else if(n1 == n2 && n3 > n1){
        cout << n1 << " " << n2 << " " << n3;
    }
    else if(n1 == n3 && n2 < n1){
        cout << n2 << " " << n1 << " " << n3;   
    } 
    else if (n1 == n3 && n2 > n1){
        cout << n1 << " " << n3 << " " << n2;
    }
    else if(n2 == n3 && n1 < n2){
        cout << n1 << " " << n2 << " " << n3;   
    }
    else if(n2 == n3 && n1 > n2){
        cout << n2 << " " << n3 << " " << n1;   
    }
    else{
        cout << "Good Lord, something went wrong.";
    }

}