#include<iostream>
#include<string>
#include<vector>
#include<unordered_map>
#include<algorithm>
#include<iomanip>

using ull = unsigned long long; // [[C++11]] replaces old typedefs used in C
using ll = long long;			// [[C++11]] replaces old typedefs used in C

int main(){
std::vector<float> aprobados{};// vector is a container of the STL( Standard Template Library) that w
                               // that works in ways similar to an array, the main difference is that 
                               // the size is not fixed, it is dynamic, meaning we can easily add elems to the vector
                               // NOTE: the name doesn't have anything to do with the mathematic's vector
int n{};
std::cin>>n;
float nota = 0;
for(int i = 0; i < n; i++){
    std::cin>>nota;
    if(nota >= 5.00){
        aprobados.push_back(nota);// with the member function push_back() we add an element to the vector
                                  // NOTE: there are differente ways to add elems to the vector
    }
}
float sum = 0.0f;
for(auto& n : aprobados){//for_each loop, when possible prefer this to the old for-range C loops
                         // under the hood it's a bit complicated but it is easy to use,
                         // basically will loop for every element in the container
                         // NOTE: the use of auto is optional, we could use float as the type,
                         // auto was introduced in C++11
    sum += n;
}
std::cout.precision(2);
std::cout<<std::fixed<<sum/aprobados.size();
return 0;
 
}