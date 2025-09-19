import java.io.*;

class Solution {
    public double solution(int[] arr) {
        double answer = 0;
        for (int i = 0; i<arr.length; i++){
            answer += arr[i];
        }
        return (answer/arr.length);
    }
    
    public static void main(String[] args) throws Exception{
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String line = br.readLine();
        String[] arrays = line.split(",");
        int[] arr = new int[arrays.length];
        for (int i=0; i<arr.length; i++){
            arr[i] = Integer.parseInt(arrays[i]);
        }
        
        Solution s = new Solution();
        
        System.out.print(s.solution(arr));
    }
}