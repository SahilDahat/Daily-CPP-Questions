#include <iostream>
using namespace std;

int main(){
    char ch;
    cin>>ch;

    if(ch >= 'A' && ch<='Z'){
        cout<<ch<< " is an Uppercase Letter"<<endl;
    }
    else if(ch>='a' &&ch<='z'){
        cout<<ch<< " is an Lowercase Letter"<<endl;
    }
    else if(ch>='0' && ch<='9'){
        cout<<"Character is a Numeric"<<endl;
    }

    return 0;
}