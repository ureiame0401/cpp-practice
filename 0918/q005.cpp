#include <iostream>
#include <string>
using namespace std;
int main(){
    string a;

    int sum=0;
    cin >> a;
    while (a!=""){
        for(char s:a){
            if (s=='-'){
                continue;
            }
            sum+=int(s);
        }
        if (sum%3==0){
            cout << "yes\n";
        }
        else{
            cout << "no\n";
        }
        cin >> a;
}}