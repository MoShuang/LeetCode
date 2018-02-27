class Solution {
    public List<Integer> partitionLabels(String S) {//此处声明公共函数与cpp的细微区别
        //for(int i =0; i < S.length(); i++) System.out.println(S.charAt(i));字符串方法，输出字符串某个位置的字符
        HashMap<String, int> last = new HashMap<String, int>();//java中类似字典的HashMap声明
        for(int i=0; i<S.length(); i++) last.put(S.charAt(i), i);
    return null;
    }
}
