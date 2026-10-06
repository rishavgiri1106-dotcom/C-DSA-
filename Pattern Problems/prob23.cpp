#include <iostream>
using namespace std;
int main(){
    int n; 
    cout<<"Enter your n:"<< endl;
    cin>>n;

    for(int row =1 ; row <= n ; row++)
    {
        for(int sp=1 ; sp<=row-1 ; sp++)
        cout<<" ";
    }
    for(int st=1 ; st<=2*(n-row)+1 ; st++)
    if(st==1 || st==2*(n-row)+1 || row==1)
    {
        cout<<" ";
    }
    cout<<endl;
}