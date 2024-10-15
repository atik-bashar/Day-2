#include<iostream>
using namespace std;

int main() {

    int tk = 260;

    if(tk > 200){
        if(tk >= 500){
            cout << "Burger + Pizza";
        }else{
            cout << "Only Burger";
        }
    }else if (tk >= 100){
        cout << "Fuchka";
    }
    else if (tk >= 50){
        cout << "Chips";
    }
    
    else{
        cout << " Nothing";
    }

    return 0;
}