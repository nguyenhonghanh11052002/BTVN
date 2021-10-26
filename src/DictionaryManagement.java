import java.util.Scanner;

public class DictionaryManagement {

    /** Nhập dữ liệu từ commandline. */
    public static Dictionary insertFromCommandline() {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        Dictionary inDictionary = new Dictionary();
        for (int i = 0; i < n; i++) {
            System.out.println("Nhập từ tiếng anh: ");
            String word = sc.nextLine();
            System.out.println("Nhập nghĩa: ");
            String meaning = sc.nextLine();
            Word inWord = new Word(word, meaning);
            inDictionary.addWord(inWord);
        }
        return inDictionary;
    }

    /** Nhập dữ liệu từ file. */

    /** tra cứu từ điển bằng dòng lệnh. */
    public void dictionaryLookup(Dictionary input) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Nhập từ cần tìm: ");
        String lookup_word = sc.nextLine();
        for (Word word:input.words) {
            if (lookup_word.equals(word.getWord_target())) {
                System.out.println(word.getWord_explain());
            }
        }
    }
}
