    import java.util.*;
     
    public class test{
        
        public static void main(String[] args)  {
            Scanner scan = new Scanner(System.in);
            int n = scan.nextInt();
            scan.nextLine();
            
            int num = 0;
            for(int i = 0; i < n; i++){
                String str = scan.nextLine();
                String sure[] = str.split(" ");
                
                if(sure[0].equals("1") && sure[1].equals("1") || sure[0].equals("1") && sure[2].equals("1") || sure[1].equals("1") && sure[2].equals("1")){
                    num += 1;
                }
            }
            
            System.out.println(num);
        }
        
    }