https://leetcode.com/problems/count-integers-with-even-digit-sum/

class Solution {
public:
    
    // Sum of digits
    int sumDigits(int num){
        int sum = 0;
        while(num!=0){
        
        sum = sum + num % 10;
        num = num / 10;
        } 
        return sum;
    }
    
    int countEven(int num) {
        int ctr = 0;
        for(int i=1; i<=num; i++){
            if((sumDigits(i))%2 == 0)
                ctr++;
        }
        

    return ctr;    
    }
    
};
