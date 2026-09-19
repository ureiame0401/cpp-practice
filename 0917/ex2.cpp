#include <iostream>
using namespace std;
int main(){
    int n,i;
    cin >> n;
    while (n!=1){
        if (n%2==0){
            n/=2;
        }
        else{
            n= 3*n+1;
        }
        i+=1;
        cout << n<<",";
    }
    cout << "\nlen: "<< i;
}