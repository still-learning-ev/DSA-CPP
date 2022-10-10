#include<iostream>
using namespace std;

int main(){
  //program to check if the input is numeric uppercase or lower
  cout<<"enter the character or number "<<endl;
  char ch;
  cin>>ch;
  if(ch>='a' && ch<='z'){
    cout<<"lower case letter"<<endl;
  }else if(ch>='A' && ch<='Z'){
    cout<<"upper case letter"<<endl;
  }else if(ch>=0 && ch<='9'){
    cout<<"numeric character"<<endl;
  }
  return 0;
}
