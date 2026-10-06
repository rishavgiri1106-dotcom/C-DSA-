#include <iostream>
using namespace std;
int main(){
int n;
cout<<"Enter the number:" << endl;
cin >> n;

for (int i=1 ; i<=n ; i++){
    if (i%2 !=0)
    {
        cout << "The following odd number are:" << i << endl ;
    }
}
return 0;
}