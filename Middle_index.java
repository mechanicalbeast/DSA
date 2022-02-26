import java.util.Scanner;
public class Middle_index
{
    public static void main(String [] args)
    {
        int arr[], n, mid;
        int start=0, end;
        Scanner obj = new Scanner(System.in);


        System.out.println("Enter the size of array");
        n= obj.nextInt();
        end=n-1;

        mid= start+((end-start)/2);

        System.out.println("Middle index of array is : " +mid);




    }

}
