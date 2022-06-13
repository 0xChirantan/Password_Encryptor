#include <iostream>
#include <string.h>
using namespace std;
 
int main(){
    string x;
    string d={0};
    char final_encrypted_passwd[500];
	char password[500];
	int encrypted_password[500];

    system("cls");
	cout<<"Type a password to encrypt (0-9,A-Z,a-z): ";
	cin>>password;
    cout<<"\n>>Encrypted password: ";
    for(int i=0; i<strlen(password); i++){
        encrypted_password[i]=password[i]+12;
        x=to_string(encrypted_password[i]);
        d+=('0'+x+'1');
    }
    cout<<d<<endl;

//  DECRYPTION PART:--
//  FAILED SUCCESSFULLY

    // d.erase(remove(d.begin(), d.end(), '0'), d.end());
    // d.erase(remove(d.begin(), d.end(), '1'), d.end());
    // cout<<"\n";
    // cout<<d;
}