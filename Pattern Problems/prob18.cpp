#include <iostream>
using namespace std;
int main(){
    int i , j ;
    int n ;
    cout<<"Enter your number:";
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        for(j=1 ; j<=n-i ; j++)
        {
            cout<<" ";
        }
        for(char name='A' ; name<='A'+i-1 ; name=name+1)
        {
            cout<<name;
        }
        cout<<endl;
    }
    return 0;
}