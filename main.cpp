#include<iostream>
using namespace std;
#include <vector>

#include<string.h>

int main()
{
  vector<string>storedusername;
  vector<string>storedpassword;
  while (true){
    cout<<"Welcome to the Sign Up or Login Page"<<endl;
    
    int choice;
    cout<<"pick 1 for sign up and 2 for log in"<<endl;
    cin>>choice;
    if(choice==1){
      string username;
      string password;
      cout<<"Username:"<<endl;
      cin>>username;
      
      cout<<"Password:"<<endl;
      cin>>password;
      
      int check=0;
      for(int i=0;i<password.length();i++){
        if(password[i]>='a' && password[i]<='z'){
          check+=1;
        }
        if(password[i]>='A' && password[i]<='Z'){
          check+=1;
        }
        if(password[i]>='0' && password[i]<='9'){
          check+=1;
        }
        if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$' || password[i]=='%' || password[i]=='^' ||password[i]=='&' ||password[i]=='*' ||password[i]=='(' ||password[i]==')'){
          check+=1;
        }
        if(password.length()>=8){
          check+=1;
        }

        if(check==0 ||check==1){
          cout<<"Bad Password"<<endl;
          break;
        }
        if(check==2 ||check==3 || check==4){
          cout<<"Okay Password"<<endl;
          break;
        }
        if(check==5){
          cout<<"Signed Up!"<<endl;
          break;
        }
          

        }
        
      storedusername.push_back(username);
      }
      
      
      

    



    

 

    
    if(choice==2){
      string checkusername;
      string checkpassword;
      cout<<"Check Username:"<<endl;
      cin>>checkusername;
      cout<<"Check Password:"<<endl;
      cin>>checkpassword;
      int counter=0;
      for(int i=0;i<storedusername.size();i++){
        if(checkusername==storedusername[i]){
          counter++;
        }
      }
      for(int i=0;i<storedpassword.size();i++){
        if(checkpassword==storedpassword[i]){
          counter++;
        }
      }

      if(counter==2){
        cout<<"Logged In!, Welcome "<<checkusername<<endl;
      }
    }
    
    
  } 
    
}


