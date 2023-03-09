import java.util.HashSet;
import java.util.Scanner;

public class Day6 {
	public static void main(String[] args) {
		Scanner scanner = new Scanner(System.in);
		int count = 0;
		char[] arr = new char[14];

		String line = scanner.nextLine();
		for (int i = 0; i < line.length(); i++) {
			char a = line.charAt(i);
			arr[13] = arr[12];
			arr[12] = arr[11];
			arr[11] = arr[10];
			arr[10] = arr[9];
			arr[9] = arr[8];
			arr[8] = arr[7];
			arr[7] = arr[6];
			arr[6] = arr[5];
			arr[5] = arr[4];
			arr[4] = arr[3];
			arr[3] = arr[2];
			arr[2] = arr[1];
			arr[1] = arr[0];
			arr[0] = a;
			
			HashSet<Character> set = new HashSet<Character>();

			set.add(arr[0]);
			set.add(arr[1]);
			set.add(arr[2]);
			set.add(arr[3]);
			set.add(arr[4]);
			set.add(arr[5]);
			set.add(arr[6]);
			set.add(arr[7]);
			set.add(arr[8]);
			set.add(arr[9]);
			set.add(arr[10]);
			set.add(arr[11]);
			set.add(arr[12]);
			set.add(arr[13]);
			if (set.size() == 14 && i > 13) {
				count = i + 1;
				break;
			}
		}

		//System.out.println(count);
		System.out.println("---");
		System.out.println(count);
		scanner.close();
	}
}
