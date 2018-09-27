#include <iostream>
#include <sstream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    char* ch;
    string str;
    vector<string> stu;
    string s;
    getline(cin,str);
    stringstream ss(str);
    cout<<str<<endl;
    //while(ss>>s)
      //  cout<<stoi(s)<<" ";   //按空格分割
    //cout<<endl;
    while(getline(ss,s,',')) //按逗号分割
    {
       stu.push_back(s);
       cout<<stoi(s)<<" ";  
    }
    cout<<endl;
    return 0;
}
