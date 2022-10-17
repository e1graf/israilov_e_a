#include <iostream>
#include <algorithm>
#include <string> 
#include <vector>
 
int main() { 
    int t; 
    int a; 
    int n;
    int i;
    std::string s;
    std::string x;
    std::cin >> t; 
    
    while (t--) { 
        std::cin >> a >> s >> n;
        std::string alph = "";
        std::vector<int> res;
        int k=0;
        
        while (n--) { 
            std::cin >> x;
            alph += x;
        }
        
        for (i=0; i<s.size();i++) {
            if (alph.find(s[i]) != std::string::npos) {
                s[i]='1';
            }
            else {
                s[i]='0';
            }
        }
        
        for (i=0; i<s.size() - 1; i++) { 
            if ((s[i]=='1') && (s[i+1]=='0')) { 
                res.push_back(k);
                k=0;
            } 
            else if (s[i]=='0') {
                    k++;
            }
        } 
        
        if (s[s.size()-1]=='1') { 
            res.push_back(k);
        }
        
        if (not(s.find('1')!=std::string::npos)){
            std::cout << 0 << std::endl;
        }
        else if (s.find('0')!=std::string::npos){
            res[0]--;
            std::cout << *max_element(res.begin(),res.end()) + 1 << std::endl;
        } 
        else { 
            std::cout << 1 << std::endl;
        } 
    }
return 0;
}