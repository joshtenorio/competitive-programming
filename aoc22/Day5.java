/*
 * WARNING !!!!!
 * this solution is very janky lmao
 */

import java.util.ArrayList;
import java.util.Comparator;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Stack;

public class Day5 {
    public static void main(String[] args) {

        Scanner scanner = new Scanner(System.in);
        ArrayList<String> crates = new ArrayList<String>();
        ArrayList<String> moves = new ArrayList<String>();

        int numStacks = 0;
        while (scanner.hasNextLine()) {
            String line = scanner.nextLine();
            String[] stacksStr = line.split("\\s+");
            if (stacksStr.length == 0 || stacksStr[1].charAt(0) != '[') {
                numStacks = Integer.parseInt(stacksStr[stacksStr.length-1]);
                break;
            }
            crates.add(line);
        }
        scanner.nextLine(); // consume empty line

        while (scanner.hasNextLine()) {
            moves.add(scanner.nextLine());
        }

        // build stacks
        ArrayList<Stack<Character>> stacks = new ArrayList<Stack<Character>>(numStacks);
        for (int i = 0; i < numStacks; i++) {
            Stack<Character> stack = new Stack<Character>();
            stacks.add(stack);
        }
        for (int i = crates.size() - 1; i >= 0; i--) {
            String row = crates.get(i);
            for (int j = 0; j < stacks.size(); j++) {
                String crate = row.substring(j * 4, (j * 4) + 3);
                if (crate.charAt(1) != ' ') {
                    stacks.get(j).push(crate.charAt(1));
                }
            }
        }

        // do moves
        for ( String move : moves) {
            String[] tokens = move.split(" ");
            int numToMove = Integer.parseInt(tokens[1]);
            int origin = Integer.parseInt(tokens[3]) - 1;
            int destination = Integer.parseInt(tokens[5]) - 1;
            // part 1
            /*
            for (int i = 0; i < numToMove; i++) {
                char crate = stacks.get(origin).pop();
                stacks.get(destination).push(crate);
            } */

            // part 2
            Stack<Character> temp = new Stack<Character>();
            for (int i = 0; i < numToMove; i++) {
                temp.push(stacks.get(origin).pop());
            }

            for (int i = 0; i < numToMove; i++) {
                stacks.get(destination).push(temp.pop());
            }
            temp.clear();
        }

        // generate message
        String message = "";
        for (Stack<Character> stack : stacks) {
            message += stack.pop();
        }

        //System.out.println(message);
        System.out.println("----");
        System.out.println(message);

        scanner.close();


    }
}
