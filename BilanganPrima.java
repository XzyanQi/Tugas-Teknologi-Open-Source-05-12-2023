import java.util.Scanner;

public class BilanganPrima {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Masukkan nilai awal: ");
        int awal = scanner.nextInt();

        System.out.print("Masukkan nilai akhir: ");
        int akhir = scanner.nextInt();

        for (int i = awal; i <= akhir; i++) {
            boolean prima = true;

            for (int j = 2; j < i; j++) {
                if (i % j == 0) {
                    prima = false;
                    break;
                }
            }

            if (prima && i != 1) {
                System.out.print(i + " ");
            }
        }

        scanner.close();
    }
}
