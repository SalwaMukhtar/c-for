// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
  int first , second,result;
   
   cout << "Enter two integrs:";
   cin>>first>>second;
   
   result=first+second;
   cout<<"sum is "<<result<<endl;
   
   result=first-second;
   cout<<"subtraction is "<<result<<endl;
   
   result=first*second;
   cout<<"multiply is "<<result<<endl;
   
   result=first%second;
   cout<<"module is "<<result<<endl;
   
   result=first/second;
   cout<<"divide is "<<result;
   
   if(first==5)
   {
       cout<<" Ok"<<endl;
   }
   else
   {
       cout<<" not Ok"<<endl;
   }
   
   for(int i=0;i<5;i++)
   {
       cout<<"IOT"<<endl;
   }
   
   
   
   
   return 0;
   
}