import static java.lang.System.*;
import java.util.Scanner;


public class Domino
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int m = sc.nextInt();
		int n = sc.nextInt();
		sc.close();

		int a;

		if(m>=1 && m<=16 && n>=1 && n<=16)
		{
			a = (m*n)/2;
			out.println(a);
		}
		else
			out.println("Invalid Input");				
	}
}
