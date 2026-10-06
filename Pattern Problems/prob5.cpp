#include <iostream>
using namespace std;
int main(){
    int row,col;
    int n;
    cout<<"Enter your number:";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        for(col=n ; col>=1 ; col--)
        {
            cout<<col<<" ";
        }
        cout<<endl;
    }
}