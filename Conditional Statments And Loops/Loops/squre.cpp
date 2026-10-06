#include <iostream>
using namespace std;
int main(){

    int n;
    cout<<"Enter your number:" << endl;
    cin>>n;

    for(int count =1 ; count<=n ; count++){
        cout << "Squre of " << count << " is:" << count*count << endl;
    }
    return 0;
}