#include <iostream>
using namespace std;
int main(){
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    int k;
    cin>>n;
    cin>>k;
    for(int i=1 ; i<=n ; i++)
    {
        for(int j=1 ; j<=n-i ; j++)
        {
            cout<<" ";
        }
        for(int r=n ; r<=i ; r++)
        {
            cout<<n*k;
        }
        cout<<endl;
    }   
    return 0;
}

