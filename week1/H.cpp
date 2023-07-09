#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long;
using ll = long long;

int main(){
 
std::vector<float> aprobados{};
int n{};
std::cin>>n;
//std::cout<<"N: "<<n;
float nota = 0;
for(int i = 0; i < n; i++){
    std::cin>>nota;
    //std::cout<<"\n"<<nota;
    if(nota >= 5.00){
        aprobados.push_back(nota);
    }
}
float sum = 0.0f;
for(auto& n : aprobados){
    sum += n;
}
std::cout.precision(2);
std::cout<<std::fixed<<sum/aprobados.size();
return 0;
 
}