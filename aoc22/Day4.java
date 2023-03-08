import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;

public class Day4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = 0;

        while (scanner.hasNextLine()) {
            String[] pair = scanner.nextLine().split(",");
            String[] firstStr = pair[0].split("-");
            String[] secondStr = pair[1].split("-");
            int[] first = {Integer.parseInt(firstStr[0]), Integer.parseInt(firstStr[1])};
            int[] second = {Integer.parseInt(secondStr[0]), Integer.parseInt(secondStr[1])};

            if ((first[0] <= second[0] && second[0] <= first[1]) ||
                (first[0] <= second[1] && second[1] <= first[1])) {
                sum++;
            }
            else if ((second[0] <= first[0] && first[0] <= second[1]) ||
                (second[0] <= first[1] && first[1] <= second[1])) {
                sum++;
            }
        }

        //System.out.println(sum);
        System.out.println("----");
        System.out.println(sum);
        scanner.close();
    }
}
