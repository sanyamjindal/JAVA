import java.util.*;
public class calculator {
    public static void main(String[] args){
        double add,sub,pro,div;
        double a,b;
        Scanner obj = new Scanner(System.in);
        System.out.println("Enter number1");
        a = obj.nextInt();

        System.out.println("Enter number2");
        b = obj.nextInt();

        System.out.println("Eneter your choice \n1.Addition \n2.Subtraction \n3.Multiplication \n4.Division\n");
      
        int choice = obj.nextInt();
        System.out.println("You Entered: " + choice);
        if (choice == 1)
        {
            add = a+b;
        System.out.println("\nAddition is: " + add);
        }
        else if (choice == 2)
        {
            sub = a-b;
        System.out.println("\nDifference is: " + sub);
        }
        else if (choice == 3)
        {
            pro = a*b;
        System.out.println("\nProduct is: " + pro);
        }
        else if (choice == 4)
        {
            div = a/b;
        System.out.println("\nQuotient is: " + div);
        }

        else
        System.out.println("Invalid input");
    }
}
