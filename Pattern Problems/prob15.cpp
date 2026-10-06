#include <iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n-i ; j++ ) //for space 
        {
            cout<<" ";
        }
        for(j=1 ; j<=i ; j++) //for star
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}