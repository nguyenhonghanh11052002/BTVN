import java.util.ArrayList;
import java.util.List;

public class Dictionary {
    public List<Word> words = new ArrayList<Word>();

    /** thêm từ vào danh sách các từ. */
    public void addWord(Word newWord) {
        words.add(newWord);
    }
}
