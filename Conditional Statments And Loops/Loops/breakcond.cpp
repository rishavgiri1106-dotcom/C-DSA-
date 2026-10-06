#include <iostream>
using namespace std;
int main(){
    int n;
    cout <<"Enter your number: " << endl ;
    cin >> n ;
    int sum=0;

    for (int i=1 ; i<=n ; i++){
        sum = sum + i ;

        if (n>=50) {
            break ;
        }
    }
    cout << "The sum is :" << sum << endl ;

    return 0 ;
}