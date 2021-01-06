    import java.util.*;
     
    public class test{
        
        public static void main(String[] args){
            Scanner scan = new Scanner(System.in);
            String str = scan.nextLine();
            String strArray[] = str.split(" ");
            int n = Integer.valueOf(strArray[0]);
            int k = Integer.valueOf(strArray[1]);
            
            String str1 = scan.nextLine();
            String participants[] = str1.split(" ");
            
            int eligible = 0;
            for(int i = 0; i < n; i++){
                int x = Integer.valueOf(participants[i]);
                if(x + k <= 5){
                    eligible += 1;
                }
            }
            
            int answer = (int) Math.floor(eligible / 3);
            System.out.println(answer);
        }
        
    }