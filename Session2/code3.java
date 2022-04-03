import java.io.*;
public class code3 {

    public static void main() throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int x;
        System.out.println("Enter a number");
        x = Integer.parseInt(br.readLine());
        System.out.println("Answer = " + x);
    }
}