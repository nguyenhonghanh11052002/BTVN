public class Test {
    public static void main(String[] args) {
        Dictionary test = new Dictionary();
        DictionaryCommandline temp= new DictionaryCommandline();
        test=temp.dictionaryBasic(test);
        temp.showAllWords(test);
    }
}