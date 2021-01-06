import java.util.*;
 
public class Test {
 
	public static void main(String[] args) {
		Scanner scan = new Scanner (System.in);
		int t = scan.nextInt();
		scan.nextLine();
		
		for(int i = 0; i < t; i++){
			String str = scan.nextLine();
			String strArray[] = str.split(" ");
			int w = Integer.valueOf(strArray[0]), h = Integer.valueOf(strArray[1]), n = Integer.valueOf(strArray[2]);
			
			int pieces = 1, test = 0;
			do{
				if(w%2 == 0 || h%2 == 0){
					if(w%2 == 0 && h%2 == 0){
						test = (int) Math.random()*(2-1+1)+1;
					}
					if(w%2 == 0 && h%2 != 0 || test == 2){
						w /= 2;
						pieces *= 2;
					}else if(w%2 != 0 && h%2 == 0 || test == 1){
						h /= 2;
						pieces *= 2;
					}
				}
			}while(w%2 == 0 || h%2 == 0);
			
			if(pieces >= n){
				System.out.println("YES");
			}else{
				System.out.println("NO");
			}
		}
	
	
 
}
}