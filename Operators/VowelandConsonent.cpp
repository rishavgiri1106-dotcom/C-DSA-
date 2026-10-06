#include <iostream>
using namespace std;
int main(){
    char c;
    cout<<"Enter a number :" << endl;
    cin>>c;
    if(c=='a' || c=='e' ||c=='i' || c=='o' || c=='u' || c=='A' || c=='E' || c=='I' || c=='O'|| c=='U')
    {
        cout<<"The given character is a vowel" << endl;
    }else
    {
        cout<<"The given character is a consonant" << endl;
    }
    return 0;
}