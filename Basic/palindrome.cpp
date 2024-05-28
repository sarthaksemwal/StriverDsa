class Solution {
public:
    bool isPalindrome(int x) {
        int digit=0;
        int rev=0;
        int temp=x;
        if(temp<0){
            return false;
        }

        while(temp!=0){
            digit=temp%10;

              if (rev > (INT_MAX - digit) / 10) {
                return false; // Overflow would occur
            }
            rev=rev*10+digit;
            temp/=10;
        }

        if(rev==x){
        return true;
        }
        else{
        return false;
        }

    
        
    }
};