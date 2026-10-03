#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n;
    cin >>n;
    int t=1;
    while (n!=0){
        vector<int> a(n);
        int sum=0;
        for (int i=0;i<n;i++){
            int temp;
            cin >>temp;
            a[i]=temp;
            sum+=temp;
        }
        int avg=sum/n;
        int ans=0;
        for (int i=0;i<n;i++){
            if (a[i]>avg){
            ans +=a[i]-avg;}
        }
        cout << "Set #"<<t++<<"\n"<<"The minimum number of moves is "<<ans<<".\n\n";
        cin >>n;
    }
}