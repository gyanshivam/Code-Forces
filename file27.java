import static java.lang.System.*;
import java.util.Scanner;

public class Team
{
		

	public static void main(String args[])
	{
		int no_of_pro, solvbl=0;
		
		out.println("Enter the number of problems in the competition: "); 
		Scanner in = new Scanner(System.in);
		no_of_pro = in.nextInt();
		

		for(int i=0; i<no_of_pro; i++)
		{
			out.println("Enter three values for the three friends. 0 if a friend doesnt know the solution or 1 if the friend knows the solution: ");
			int frst_frnd = in.nextInt();
			int scnd_frnd = in.nextInt();
			int thrd_frnd = in.nextInt();
			
			if(frst_frnd + scnd_frnd + thrd_frnd >= 2)
				solvbl++;
		}
		out.println();
		out.println("The no of problem for which they will write solution are:  "+solvbl);
	}
}
