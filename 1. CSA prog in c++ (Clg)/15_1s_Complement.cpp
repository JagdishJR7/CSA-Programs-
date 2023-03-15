#include <iostream>
#include <string>
using namespace std;

string onesComp(string binaryNumber){
    string onesComp="";

    for(int i=0; i<binaryNumber.length();i++){
        onesComp += (binaryNumber[i]=='0') ? '1':'0';

    }
    return onesComp;

}
int main(){
    string binaryNumber;

    cout<<"Enter the binary number :";
    cin>>binaryNumber;

    cout<<"1's Complement is :"<<onesComp(binaryNumber)<<endl;

    return 0;
}