class UserMainCode
{
    public int digitRemove_Palin(int input1)
    {
        String s = String.valueOf(input1);

        if (isPalindrome(s))
            return -1;

        for (int i = 0; i < s.length(); i++)
        {
            String t = s.substring(0, i) + s.substring(i + 1);

            if (isPalindrome(t))
                return s.charAt(i) - '0';
        }

        return -1;
    }

    private boolean isPalindrome(String s)
    {
        int i = 0, j = s.length() - 1;

        while (i < j)
        {
            if (s.charAt(i) != s.charAt(j))
                return false;
            i++;
            j--;
        }

        return true;
    }
}