import java.io.*;
import java.util.*;

class Solution {
    public double solution(int[] numbers) {
        int result = 0;
        for (int num : numbers){
            result += num;
        }
        
        double answer = 0;
        answer = (double) result / numbers.length;
        return answer;
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        
        String[] strings = line.split(",");
        int[] numbers = new int[strings.length];
        for (int i=0; i<numbers.length; i++){
            numbers[i] = Integer.parseInt(strings[i]);
        }
        Solution s = new Solution();

        System.out.print(s.solution(numbers));
        // BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
        // bw.write(answer);
        // bw.flush();
        // bw.close();
    }
}