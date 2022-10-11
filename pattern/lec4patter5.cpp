#include<iostream>
using namespace std;
int main(){
 /*
1 2 3 
4 5 6 
7 8 9
  */
  cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int count=1,i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      cout<< count<<" ";
      j++;
      count++;
    }
    i++;
    cout<<endl;
  }
  return 0;
}
