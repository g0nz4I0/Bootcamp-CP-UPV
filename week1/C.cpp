#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

void replace_vowels(std::string& s){
   for(int i = 0 ; i < s.length(); i++){
        char aux = (char)toupper(s[i]);
            switch(aux){
            case 'A':
                s[i] = '0';
                break;
            case 'E':
                s[i] = '0';
                break;
            case 'I':
                 s[i] = '0';
                break;
            case 'O':
                s[i] = '0';
                break;
             case 'U':
                s[i] = '0';
                break; 
            default:
            	break;
            }
    }
}
int main(){
    int n{};
    std::cin>>n;
    int k = 0;
    for(int i = 0;i < n; i++){
        std::cin>>k;
        std::cout<<k*2<<" ";
    }
    std::cout<<"\n";
    int n2{};
    std::cin>>n2;
    char a{};
    for(int i = 0; i < n2; i++){
        std::cin>>a;
        std::cout<<(char)toupper(a)<<" ";
    }
    std::cout<<"\n";
    int n3{};
    std::cin>>n3;
    std::string s{};
    for(int i = 0; i < n3; i++){
        std::cin>>s;
        replace_vowels(s);
        std::cout<<s<<" ";
    }
    
}