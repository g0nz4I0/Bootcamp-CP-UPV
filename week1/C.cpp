#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long; // [[C++11]] replaces old typedefs used in C
using ll = long long;			// [[C++11]] replaces old typedefs used in C

void replace_vowels(std::string& s){// we pass the string as a reference, note the '&' symbol
                                    // this way the changes done to it will affect the original variable
                                    // for more info search about-> pass by value AND pass by reference C++ 
   for(auto& c : s){     //for_each loop, when possible prefer this to the old for-range C loops
                         // under the hood it's a bit complicated but it is easy to use,
                         // basically will loop for every element in the container
                         // IMPORTANT: when we use the for_each loop if we want to change
                         // element we have to use the reference notation, otherwise we would be creating a copy
                         // NOTE: the use of auto is optional, we could use char as the type,                         
                         // auto was introduced in C++11           
        char aux = c;
         aux = (char)toupper(c);
            switch(aux){
            case 'A':
               c = '0';
                break;
            case 'E':
                c = '0';
                break;
            case 'I':
                 c = '0';
                break;
            case 'O':
                c = '0';
                break;
             case 'U':
                c = '0';
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