#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long; // [[C++11]] replaces old typedefs used in C
using ll = long long;			// [[C++11]] replaces old typedefs used in C
ull triangular(ull l)//not much to this problem in terms of C++, just some math
{
    if(l == 1){
        return 1;
    }
    if(l % 2 == 0)//if the base is even
    {
        return (l + 1) * l/2;
    }else{
       return triangular(l-1) + l;
    }
}
 
int main(){
ull n{};
std::cin>>n;
std::cout<<triangular(n);
return 0;
 
}