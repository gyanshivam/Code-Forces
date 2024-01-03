import java.util.*;

public class A{
    public static void check(int arr[])
    {
        for(int i=0; i<arr.length; i++)
        {
            if(arr[i]==1)
            {
                System.out.println("HARD");
                return;
            }
        }
        
        System.out.println("EASY");
        return;
    }
    public static void main(String args[])
    {
        Scanner sc = new Scanner(System.in);
        
        int size = sc.nextInt();
        
        int arr[] = new int[size];
        
        for(int i=0; i<size; i++)
            arr[i] = sc.nextInt();
            
        check(arr);
    }
}
