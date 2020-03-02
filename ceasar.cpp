#include<iostream>
#include<string.h>
using namespace std;
int main() {
   cout<<"Enter the message:\n";
   char msg[100];
   cin.getline(msg,100); //take the message as input
   int i, j, length,choice,key;
   cout << "Enter key: ";
   cin >> key; //take the key as input
   length = strlen(msg);
   cout<<"Enter your choice \n1. Encryption \n2. Decryption \n";
   cin>>choice;
   if (choice==1) //for encryption{
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
          char ch = msg[i];
         //encrypt for lowercase letter
         if (ch >= 'a' && ch <= 'z'){
            ch = ch + key;
            if (ch > 'z') {
               ch = ch - 'z' + 'a' - 1;
            }  
            msg[i] = ch;
         }
         
      }
      cout<<("Encrypted message: %s", msg);
   }
   else (choice == 2) { //for decryption
      char ch;
      for(int i = 0; msg[i] != '\0'; ++i) {
         ch = msg[i];
         //decrypt for lowercase letter
         if(ch >= 'a' && ch <= 'z') {
            ch = ch - key;
            if(ch < 'a'){
               ch = ch + 'z' - 'a' + 1;
            }
            msg[i] = ch;
         }
        
      }
      cout << "Decrypted message: " << msg;
   }
}
