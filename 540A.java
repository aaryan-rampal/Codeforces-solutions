    import java.util.*;
     
    public class Test {
     
        public static void main(String[] args) {
            Scanner scan = new Scanner(System.in);
            int n = scan.nextInt();
            scan.nextLine();
            
            String text1 = scan.nextLine();
            String text = scan.nextLine();
            int current[] = new int[text1.length()];
            int correct[] = new int[text.length()];
            int moves = 0;
            for(int i = 0; i < text1.length(); i++){
                current[i] = Integer.valueOf(text1.charAt(i));
                correct[i] = Integer.valueOf(text.charAt(i));
                
                int x = Math.abs(current[i] - correct[i]);
                if(x <= 5){
                    moves += x;
                }else{
                    moves += (10 - x);
                }
            }
            System.out.println(moves);
        }
     
    }