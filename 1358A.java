    import java.util.*;
     
    public class test{
        
        public static void main(String[] args){
            Scanner scan = new Scanner(System.in);
            int t = scan.nextInt();
            scan.nextLine();
            
            int cases[] = new int[t*2];
            int x = 0;
            for(int i = 0; i < t; i++){
                String str = scan.nextLine();
                String strArray[] = str.split(" ");
                cases[x] = Integer.valueOf(strArray[0]);
                cases[x+1] = Integer.valueOf(strArray[1]);
                
                int answer = 0;
                //if both even
                if(cases[x+1]%2 == 0){
                    int multiple = cases[x+1]/2;
                    answer = cases[x] * multiple;
                    System.out.println(answer);
                }else{
                    int multiple = (cases[x+1]-1)/2;
                    answer += cases[x] * multiple;
                    if(cases[x]%2 == 0){
                        answer += cases[x] / 2;
                        System.out.println(answer);
                    }else{
                        answer += (cases[x]+1) / 2;
                        System.out.println(answer);
                    }
                }
                
                x += 2;
            }
            
        }
        
    }