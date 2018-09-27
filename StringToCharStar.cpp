#include <iostream>
using namespace std;

int main() {
    char* ch;
    string str;
    int i=0;
    getline(cin,str);
    cout<<str<<endl;
//    ch = &str[0];
//    ch = (char*) str.data();
    ch = (char*) str.c_str();
    while(ch[i]!='\0')
    {
        //cout<<((int)ch[i])<<" ";
	cout<<((int)ch[i]-48)<<" "; //turn a number
        ch++;
    }
    cout<<endl;

    return 0;
}
