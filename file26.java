import static java.lang.System.*;
import java.util.Scanner;

public class Team
{
		

	public static void main(String args[])
	{
		int no_of_pro, solvbl=0;
		
		Scanner in = new Scanner(System.in);
		no_of_pro = in.nextInt();
		

		for(int i=0; i<no_of_pro; i++)
		{
			int frst_frnd = in.nextInt();
			int scnd_frnd = in.nextInt();
			int thrd_frnd = in.nextInt();
			
			if(frst_frnd + scnd_frnd + thrd_frnd >= 2)
				solvbl++;
		}
		out.println(solvbl);
	}
}
