import java.util.*;

class Solution {
    public long solution(long n) {
        
        long answer = 0;
        String num = Long.toString(n);
        char[] arr = num.toCharArray();
        Arrays.sort(arr);
        StringBuilder sb = new StringBuilder(new String(arr));
        sb.reverse();
        
        answer = Long.parseLong(sb.toString());
        return answer;
    }
}