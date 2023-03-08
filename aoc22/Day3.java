import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;

public class Day3 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int sum = 0;
        int groupUwu = 0;
        HashSet<Character> first = new HashSet<>();
        HashSet<Character> second = new HashSet<>();
        HashSet<Character> third = new HashSet<>();
        while (scanner.hasNextLine()) {
            groupUwu++;
            String line = scanner.nextLine();

            if(groupUwu % 3 == 0) {
                for (int i = 0; i < line.length(); i++) {
                        char a = line.charAt(i);
                        third.add(a);
                    }
                    first.retainAll(second);
                    first.retainAll(third);
                    char intersection = (char) first.toArray()[0];
                    if ((int) intersection >= 97) {
                        sum += (int) intersection - 96;
                    }
                    else if ((int) intersection >= 65) {
                        sum += (int) intersection - 38;
                    }
                    first.clear();
                    second.clear();
                    third.clear();
            }
            else if (groupUwu % 2 == 0) {
                for (int i = 0; i < line.length(); i++) {
                    char a = line.charAt(i);
                    second.add(a);
                }
            }

            else
                for (int i = 0; i < line.length(); i++) {
                    char a = line.charAt(i);
                    first.add(a);
                }

        }

        //System.out.println(sum);
        System.out.println("---");
        System.out.println(sum);
        scanner.close();
    }
}
