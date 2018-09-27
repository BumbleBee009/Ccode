#include <iostream>
using namespace std;

int main() {
    int i=0;
    char ch[9];
    string str;
    getline(cin,str);
    cout<<str<<endl;
    for(i=0;i<str.length();i++)
    {
       ch[i] = str[i];
       //cout<<ch[i]<<" ";
       cout<<int(ch[i]-48)<<" ";
    }
    ch[i] = '\0';
    cout<<endl;

    return 0;
}
