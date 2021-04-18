//Write a C++ program to read a character from keyboard and convert it into uppercase if it is in lowercase and vice versa.
#include<iostream>
using namespace std;
void to_lower_vive_versa(char *s){
    int i;
    for(i=0;s[i]!='\0';i++){
        if(s[i] >= 'a' && s[i] <= 'z'){
            s[i] = s[i]-32;
            cout<<s[i];
            }

        else if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i]+ 32;
            cout<<s[i];
            }
    }
    cout<<endl;
}

int main(){
    char character[50];
    cout<<"Enter only character :"<<endl;
    cin>>character;
    to_lower_vive_versa(character);
}