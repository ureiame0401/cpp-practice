#include <iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str);
    for (auto a:str){
        cout << char(a-7);
    }
}