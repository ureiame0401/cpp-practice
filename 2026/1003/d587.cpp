#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> a;
    int temp=0;
    for (int i=0;i<n;i++){
        cin >>temp;
        a.push_back(temp);
    }
    bool sort=false;
    while (!sort){
        int si=0;
        for (int i=0;i<n-1;i++){
            //cout << (a[i]>a[i+1]);
            if (a[i]>a[i+1]){
                int temp=a[i+1];
                a[i+1]=a[i];
                a[i]=temp;
            }
            else{
                si++;
            }
        }
        if (si==n-1){
            sort=true;
            break;
        }
    }
    for (int i=0;i<n;i++){
        cout<<a[i];
        if (i!=n-1){
            cout << " ";
        }
    }
}