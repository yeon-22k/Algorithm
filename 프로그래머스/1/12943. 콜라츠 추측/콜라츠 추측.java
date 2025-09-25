class Solution {
    public int solution(int num) {
        return cal(num, 0);
    }
    
    public int cal(long num, int count) {  
        if (count >= 500) {
            return -1;
        }
        if (num == 1) {
            return count;
        }
        if (num % 2 == 0) {
            return cal(num / 2, count + 1);
        } else {
            return cal(num * 3 + 1, count + 1);
        }
    }
}
