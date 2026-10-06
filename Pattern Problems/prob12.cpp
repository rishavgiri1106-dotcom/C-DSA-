#include <iostream>
using namespace std;
int main(){
    int i,j;
    int n;
    cout<<"Enter the number:"<< endl;
    cin>>n;

    for(i=1 ; i<=n ; i++)
    {
        char name = 'a'+(i-1);
        for(j=1 ; j<=i ; j++)
        {
            cout<<name<<" ";
        }
        cout<<endl;
    }
    return 0;
}