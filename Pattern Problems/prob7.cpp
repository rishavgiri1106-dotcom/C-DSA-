#include <iostream>
using namespace std;
int main(){
    int row,col;
    int count=1;
    int n;
    cout<<"Enter the number:";
    cin>>n;

    for(row=1 ; row<=n ; row++)
    {
        for(col=1 ; col<=n ; col++)
        {
            cout<<count<<" ";
            count=count+1;
        }
        cout<<endl;
    }
}