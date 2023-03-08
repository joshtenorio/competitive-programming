import java.io.File;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

public class Day2 {
    public static void main(String[] args) {
        String rock = "A";
        String paper = "B";
        String scissors = "C";
        
        Scanner scanner = new Scanner(System.in);
        int score = 0;
        while (scanner.hasNextLine()) {
            String[] line = scanner.nextLine().split(" ");
            if (line[1].equals("X")) { // lose
                if (line[0].equals(rock)) {
                    score += 3;
                }
                else if (line[0].equals(paper)) {
                    score += 1;
                }
                else if (line[0].equals(scissors)) {
                    score += 2;
                }
            }
            else if (line[1].equals("Y")) { // draw
                score += 3;
                if (line[0].equals(paper)) {
                    score += 2;
                }
                else if (line[0].equals(rock)) {
                    score += 1;
                }
                else if (line[0].equals(scissors)) {
                    score += 3;
                }
            }
            else if (line[1].equals("Z")) { // win
                score += 6;
                if (line[0].equals(scissors)) {
                    score += 1;
                }
                else if (line[0].equals(paper)) {
                    score += 3;
                }
                else if (line[0].equals(rock)) {
                    score += 2;
                }
            }
        }

        //System.out.println(score);
        System.out.println("-----");
        System.out.println(score);


    }
}
