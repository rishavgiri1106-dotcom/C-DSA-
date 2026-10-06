#include <iostream>
using namespace std;
int main(){
    int n ;
    cout << "Enter your number :";
    cin>>n;

    for(int i=1 ; i<=n ; i++)
    {
        for(int col=1 ; col<=n-i ; col++)
        {
            cout<<" ";
        }
        for(int col=1 ; col<=i ; col++)
        {
            cout<<col;
        }
        for(int col=i-1 ; col>=1 ; col--)
        {
            cout<<col;
        }
        cout<<endl;
    }
    return 0;

}