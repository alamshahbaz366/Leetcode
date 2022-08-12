Credits: https://www.geeksforgeeks.org/program-for-sum-of-the-digits-of-a-given-number/

1) Iterative
  
Time Complexity : O(logn)

Auxiliary Space: O(1)

int getSum(int n)
    {
        int sum = 0;
        while (n != 0) {
            sum = sum + n % 10;
            n = n / 10;
        }
        return sum;
    }

2) SIngle line 
  

Time Complexity : O(logn)

Auxiliary Space: O(1)
  
int getSum(int n)
    {
        int sum;
 
        /* Single line that calculates sum */
        for (sum = 0; n > 0; sum += n % 10, n /= 10)
            ;
 
        return sum;
    }



3) Recursive
  
Time Complexity : O(logn)

Auxiliary Space: O(logn)
  
  
int sumDigits(int no)
    {
        if(no == 0){
          return 0 ;
        }
       
        return (no % 10) + sumDigits(no / 10) ;
    }



 4) String as input

Time Complexity : O(logn)

Auxiliary Space: O(1)
  

int getSum(string str)
{
    int sum = 0;
 
    // Traversing through the string
    for (int i = 0; i < str.length(); i++) {
        // Since ascii value of
        // numbers starts from 48
        // so we subtract it from sum
        sum = sum + str[i] - 48;
    }
    return sum;
}


  
