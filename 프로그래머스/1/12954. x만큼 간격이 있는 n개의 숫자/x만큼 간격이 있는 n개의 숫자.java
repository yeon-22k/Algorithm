import java.io.*;
import java.util.*;

class Solution {
    public long[] solution(int x, int n) {
        long[] answer = new long[n];
        
        for (int i=0; i<n; i++){
            answer[i] = (long) (i+1)*x;
        }
        
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader bf = new BufferedReader(new InputStreamReader(System.in));
        StringTokenizer st = new StringTokenizer(bf.readLine());
        
        int x = Integer.parseInt(st.nextToken());
        int n = Integer.parseInt(st.nextToken());
        
        Solution s = new Solution();
        s.solution(x,n);
    }
}