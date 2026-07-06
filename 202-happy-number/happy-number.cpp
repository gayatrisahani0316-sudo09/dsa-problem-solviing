class Solution {
private:
    int getNext(int n){
        int sum = 0;
        while(n>0){
        int lastdigit = n%10;
        sum += lastdigit * lastdigit;
        n = n/10;
        }
        return sum;
    }    
public:
    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        while( fast != 1 && fast != slow){
            slow = getNext(slow);
            fast = getNext(getNext(fast));
        }
        return fast == 1;
    }
};