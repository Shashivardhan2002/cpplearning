class Solution {
public:
    bool isPalindrome(int x) {
        long int palin=0;
        int temp=x;
        while(temp>0){
            int m=temp%10;
            palin=(palin*10)+m;
            temp/=10;
        }
         if(x==palin){
             return true;
         }
        else{
            return false;
        }
    }
};
