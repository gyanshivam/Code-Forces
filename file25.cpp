import static java.lang.System.*;
import java.util.Scanner;

public class NextRound
{
	public static void main(String args[])
	{
		int pssd_stdnt=0;
		Scanner in = new Scanner(System.in);
		int n_o_s = in.nextInt();
		int marks_students[]=new int[n_o_s];
		int cutoff = in.nextInt();

		for(int i=0; i<n_o_s; i++)
		{
			marks_students[i] = in.nextInt();
				if(marks_students[i]>=marks_students[cutoff-1] && marks_students[i]!=0)
					pssd_stdnt++;						
		}
		out.println(pssd_stdnt);
	}
}
