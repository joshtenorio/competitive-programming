import java.io.File;
import java.util.ArrayList;
import java.util.Comparator;
import java.util.Scanner;

class Day1 {
	public static void main(String args[]) {
		File file = new File("input");
		try {
			Scanner scanner = new Scanner(System.in);
			ArrayList<Integer> elves = new ArrayList<Integer>();
			int num = 0;
			int max = 0;

			while (scanner.hasNextLine()) {
				String line = scanner.nextLine();
				if (line.equals("")) {
					System.out.println("new elf");
					elves.add(num);
					if (num > max) {
						max = num;
					}
					num = 0;
				}
				else {
					num += Integer.parseInt(line);
				}
			}

			if (num > max) max = num;
			System.out.println(max);
			System.out.println("-----");

			elves.sort(Comparator.reverseOrder());
			System.out.println(elves.get(0) + elves.get(1) + elves.get(2));

			scanner.close();
		} catch (Exception e) {

		}

		
	}
}
