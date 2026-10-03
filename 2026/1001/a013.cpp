#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;
int rcnum(char a){ //rome char to int
    switch(a){
        case 'I':
            return 1;
        case 'V':
            return 5;
        case 'X':
            return 10;
        case 'L':
            return 50;
        case 'C':
            return 100;
        case 'D':
            return 500;
        case 'M':
            return 1000;
    }
    return 0;
}
int romenum(string str){
    int num=0;
    int ima=0,tsugi=0;
    for (int i=0;i<str.length()-1;i++){
        if (rcnum(str[i])<rcnum(str[i+1])){
            num-=rcnum(str[i]);
        }
        else{
            num +=rcnum(str[i]);
        }
    }
    num +=rcnum(str[str.length()-1]);
    return num;
}

int main(){
    string ia="";
    string ib="";
    int a=0,b=0;
    int ans=0;

    while (cin >> ia >> ib&&ia!="#"){
        a=romenum(ia);
        b=romenum(ib);
        ans=abs(a-b);
        
        
    }
    return 0;
}