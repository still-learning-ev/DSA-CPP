#include<iostream>
using namespace std;
int main(){
  /*
              * 
            * * 
          * * * 
        * * * * 
      * * * * * 
    * * * * * *
  */
  
 cout<<"enter the number"<<endl;
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
    int j=1;
    while(j<=n){
      if(j<=n-i)
        cout<<"  ";
      else
        cout<<"* ";
      j++;
    }

    cout<<endl;
    i++;
  }
  return 0;
}
