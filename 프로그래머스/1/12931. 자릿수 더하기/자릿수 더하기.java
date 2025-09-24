import java.util.*;
import java.io.*;

public class Solution {
    public int solution(int num) {
        int answer = 0;
        while (num != 0){
            answer += (num%10);
            num /= 10;
        }
        System.out.println(answer);

        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        int num = Integer.parseInt(bf.readLine());
        
        Solution s = new Solution();
        s.solution(num);
    }
}