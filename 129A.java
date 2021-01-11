package main;

import java.util.Scanner;

public class Cookies {
	
	public static void main (String[] args) {
		Scanner scan = new Scanner (System.in);
		int n = scan.nextInt();
		scan.nextLine();
		
		inputLoop(n, scan);
	}
	
	public static void inputLoop (int n, Scanner scan) {
		int odd = 0, even = 0;
		String str = scan.nextLine();
		String[] strArray = str.split(" ");
		
		int[] candiesInBag = new int [strArray.length];
		for (int j = 0; j < strArray.length; j++) {
			candiesInBag[j] = Integer.parseInt(strArray[j]);
			if (candiesInBag[j] % 2 != 0) {
				odd++;
			} else {
				even++;
			}
		}
		
		doesTheMath (candiesInBag, n, odd, even);
		
	}
	
	public static void doesTheMath (int[] candiesInBag, int n, int odd, int even) {
		if (n % 2 != 0) {
			System.out.println(odd);
		} else {
			System.out.println(even);
		}
	}
	
}
