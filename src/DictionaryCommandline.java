public class DictionaryCommandline {
    public void showAllWords(Dictionary ouDicyionary) {
        System.out.println("No\t|English\t\t|Vietnamese");
        int idx = 1;
        for (Word ouword:ouDicyionary.words) {
            System.out.println(idx + "\t" + ouword.getWord_target() + "\t\t" + ouword.getWord_explain());
            ++idx;
        }
    }
    //ở đây phải trả về Dictionary để dữ liệu được lưu lại ở hàm main
    public Dictionary dictionaryBasic(Dictionary input) {
        input = DictionaryManagement.insertFromCommandline();
        showAllWords(input);
        return input;
    }

    public void dictionaryAdvanced() {

    }
}
