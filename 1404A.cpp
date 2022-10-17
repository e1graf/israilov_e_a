#include <iostream> 
#include <string>
 
int main() { 
    int m, a, r, i, o, n, e, t, k; 
    std::string s;
    
    std::cin >> t;
    
    for (i=t; i>0; i--) { 
        
        std::cin >> n >> k >> s;
        int flag = 0;
                
        for (o=0; o<k; o++) {
            
            for (e=k+o; e<n; e+=k) {
                
                if (s[o] == '?') {
                    if (s[e] != '?') {
                        s[o] = s[e];
                        }
                    }
                else if (s[e] == '?') {
                    if (s[o] != '?') {
                        s[e] = s[o];
                        }
                    } 
                else if (s[e] != s[o]) { 
                    flag = 1;
                    break;
                    }}
        }   
        
        int num_0 = 0, num_1 = 0;
            
        for (m=0; m<k; m++) { 
            
            if (s[m] == '1') { 
                num_1++;
                }
            else if (s[m] =='0') {
                num_0++;
                }
            }   
        
        if ( (num_0 > k/2) || (num_1 > k/2) ) {
            flag = 1;
            }
                
        if (flag == 1) {
            std::cout << "NO"; 
            std::cout << std::endl;
            }
        else {
            std::cout << "YES";
            std::cout << std::endl;
            }
        }
        
return 0;
 
}