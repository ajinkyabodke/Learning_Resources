/*    
               ****
               ***
               **
               *                
*/
import java.util.*;

class Pattern5{
	public static void main(String[] args) {
		
		for (int i=1; i<=4 ; i++) {
			for (int j=1; j<=i; j++) {
				System.out.print(" ");				
			}
		    //System.out.println();
		    for (int k=4; k>=i ; k--) {
		    	System.out.print("*");
		    	
		    }
		    System.out.println();
		}
	}
}