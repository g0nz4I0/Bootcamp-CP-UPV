#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;
ull triangular(ull l)
{
    if(l == 1){
        return 1;
    }
    if(l % 2 == 0)//si la base es par
    {
        return (l + 1) * l/2;
    }else{
       return triangular(l-1) + l;
    }
}
 
int main(){
unsigned long long n{};
std::cin>>n;
std::cout<<triangular(n);
return 0;
 
}