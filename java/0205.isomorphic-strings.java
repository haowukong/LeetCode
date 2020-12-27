class Solution{
    public boolean isIsomorphic(String s, String t) {
        if (s.length() != t.length())
            return false;
        Map<Character,Character> map=new HashMap<>();
        for(int i=0;i<s.length();++i){
            char ch=s.charAt(i);
            if (map.containsKey(ch)) {
                if (map.get(ch) != t.charAt(i))
                    return false;
            } else if (map.containsValue(t.charAt(i))) {
                return false;
            } 
            else{
                map.put(ch, t.charAt(i));
            }
        }
        return true;
    }
}

class Solution {
    public boolean isIsomorphic(String s,String t) {
        if (s.length() != t.length()) {
            return false;
        }
        for (int i = 0; i < s.length(); ++i) {
            if (s.indexOf(s.charAt(i)) != t.indexOf(t.charAt(i))) {
                return false;
            }
        }
        return true;
    }
}