#include <iostream>
#include <vector>


std::string longestCommonPrefix(std::vector<std::string>& strs) {
            std::string ans = ""; 
            std::sort(strs.begin(), strs.end());
            std::string first = strs[0], last = strs[strs.size() - 1]; 

            for(int i = 0; i < std::min(first.size(), last.size()); i++) { 
                if(first[i]!=last[i]){
                    return ans;
                }
                ans += first[i];
            }
        return ans;    
    }

int main() {
   std::vector<std::string> myVector;

   for(int i = 0; i < 3; i++) {
    std::string slowo;
    std::cin>>slowo;
    myVector.push_back(slowo);
   }

   std::vector<std::string>& myRef = myVector;


    std::cout<<longestCommonPrefix(myRef)<<std::endl;
}