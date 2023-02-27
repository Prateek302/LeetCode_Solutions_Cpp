class Solution {
public:
    bool isPalindrome(int x) {
        int ans = 0;
        int n=x;       // new variable with given value

        // case 1: if given is negative
        if (n<0){
            return false;
        }
        // case 2: else
        else{ 
            while(n!=0){

                int digit = n%10;       //digit nikala let 121%10=1
                if(ans<INT_MAX/10){     //constraints check kiya (2^31-1 = INT_MAX)
                   ans = ans *10+digit;   //formula (store value in new variable)
                }
                n=n/10;                 //divide kiya 121/10=12 
                                        //repeat untill n=0
             }

            if(ans==x){              //given aur result ko match kra liya
                return true;
            }
            else{
                return false;
            }
            
        }
        
    }
};
