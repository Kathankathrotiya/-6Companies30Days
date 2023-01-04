class Solution {
    public String getHint(String secret, String guess) {
        int c=0;
        int b=0;
        //frequency of digits
        int arr[]=new int[10];

        for(int i=0;i<secret.length();i++)
        {
            if(secret.charAt(i)==guess.charAt(i))
                b++;
            else 
            {
                if(arr[secret.charAt(i)-'0']++ < 0) c++;
                if(arr[guess.charAt(i)-'0']-- > 0) c++;
            }
        }
        return b+"A"+c+"B";
    }
}