import java.util.*;

public class Test{
    
    public static String shift;
    public static String input;
    final public static String topRowLetters = "qwertyuiop";
    final public static String midRowLetters = "asdfghjkl;";
    final public static String botRowLetters = "zxcvbnm,./";

    public static void main(String[] args){
            input();
            String b = loop();
            System.out.println(b);
    }

    public static void input(){
            Scanner scan = new Scanner(System.in);
            shift = scan.nextLine();
            input = scan.nextLine();
    }

    public static String loop(){
        String actualword = "";
        int a;
        
        for(int i = 0; i < input.length(); i++){
            if(topRowLetters.contains(String.valueOf(input.charAt(i)))){
                a = index(input.charAt(i), topRowLetters);
                actualword += String.valueOf(topRowLetters.charAt(a));
            }else if(midRowLetters.contains(String.valueOf(input.charAt(i)))){
                a = index(input.charAt(i), midRowLetters);
                actualword += String.valueOf(midRowLetters.charAt(a));
            }else{
                a = index(input.charAt(i), botRowLetters);
                actualword += String.valueOf(botRowLetters.charAt(a));
            }
        }
        return actualword;
    }
    
    public static int index(char input, String original){
        int x = 0;
        switch(shift){
            case "R":
                x = 1;
                break;
            case "L":
                x = -1;
                break;
        }
        return original.indexOf(String.valueOf(input)) - x;
    }
	
}		
