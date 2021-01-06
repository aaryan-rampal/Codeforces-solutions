import java.util.*;
 
public class test{
	
	public static void main(String[] args)  {
		Scanner scan = new Scanner(System.in);
		int n = scan.nextInt();
		scan.nextLine();
		
		String words[] = new String[n];
		for(int i = 0; i < n; i++){
			words[i] = scan.nextLine();
			if(words[i].length() > 10){
				System.out.println(String.valueOf(words[i].charAt(0)) + (words[i].length()-2) + String.valueOf(words[i].charAt(words[i].length()-1)));
			}else{
				System.out.println(words[i]);
			}
		}
	}
	
}