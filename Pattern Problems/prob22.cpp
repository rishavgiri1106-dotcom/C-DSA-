#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter your number:"<<endl;
    cin>>n;
    for(int i=n ; i>=1 ; i--)
    {
        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<"  ";
        }
        for(int l=1 ; l<=2*i-1 ; l++)
        {
            cout<< "*" << " ";
        }
        cout<<endl;
    }
    return 0;
}