bool fun(string &str, int i, int j) {

  if (i == j || i > j)

    return true;

  else if (str[i] == str[j]) {

    fun(str, i + 1, j - 1);

  } else

    return false;

}

 

bool isPalindrome(string &str) {

  // Write your code here.

  fun(str, 0, str.size() - 1);

}
