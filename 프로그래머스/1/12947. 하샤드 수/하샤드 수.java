class Solution {
    public boolean solution(int x) {
        int tmpX = x;
        int tmp = 0;
        while(x > 0){
            tmp += (x%10);
            x /= 10;
        }
        if ((tmpX % tmp) == 0) {
            return true;
        }
        else return false;
    }
}