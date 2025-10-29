class Solution {
  public int numberOfBeams(String[] bank) {
    int prev=0,ans=0;
    for(var s: bank) {     //var==auto//
      int cnt=0;
      for(var i=0;i<s.length();i++)
        if(s.charAt(i)=='1') {
          cnt++;
        }
      if(cnt>0) {
        ans+=prev*cnt;
        prev=cnt;
      }
    }
    return ans;
  }
}


// class Solution {
//   public int numberOfBeams(String[] bank) {
//     int prev = 0, ans = 0;

//     for (String s: bank) {
//       int count = 0;
//       for (int i = 0; i < s.length(); i++)
//         if (s.charAt(i) == '1') {
//           count++;
//         }

//       if (count > 0) {
//         ans += prev * count;
//         prev = count;
//       }
//     }

//     return ans;
//   }
// }