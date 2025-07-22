// class Solution {
// public:
//     string str(int n)
//     {
//         if(n==1)
//         return "I";
//         else if(n==2)
//         return "II";
//         else if(n==3)
//         return "III";
//         else if(n==4)
//         return "IV";
//         else if(n==5)
//         return "V";
//         else if(n==6)
//         return "VI";
//         else if(n==7)
//         return "VII";
//         else if(n==8)
//         return "VIII";
//         else if(n==9)
//         return "IX";
//         else if(n==10)
//         return "X";
//         else if(n==20)
//         return "XX";
//         else if(n==30)
//         return "XXX";
//         else if(n==40)
//         return "XL";
//         else if(n==50)
//         return "L";
//         else if(n==60)
//         return "LX";
//         else if(n==70)
//         return "LXX";
//         else if(n==80)
//         return "LXXX";
//         else if(n==90)
//         return "XC";
//         else if(n==100)
//         return "C";
//         else if(n==200)
//         return "CC";
//         else if(n==300)
//         return "CCC";
//         else if(n==400)
//         return "CD";
//         else if(n==500)
//         return "D";
//         else if(n==600)
//         return "DC";
//         else if(n==700)
//         return "DCC";
//         else if(n==800)
//         return "DCCC";
//         else if(n==900)
//         return "CM";
//         else if(n==1000)
//         return "M";
//         else if(n==2000)
//         return "MM";
//         else if(n==3000)
//         return "MMM";
//         else
//         return "";
        
//     }
//     string intToRoman(int num) {
//         string ans;
//         ans=ans+str((num/1000)*1000)+str(((num%1000)/100)*100)+str(((num%100)/10)*10)+str(num%10);
//         return ans;
//     }
// };







//WORKING
// class Solution {
// public:
//     string intToRoman(int num) {
//         string ones[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
//         string tens[] = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
//         string hrns[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};
//         string ths[]={"","M","MM","MMM"};
        
//         return ths[num/1000] + hrns[(num%1000)/100] + tens[(num%100)/10] + ones[num%10];
//     }
// };

//WORKING
// class Solution {
// public:
//     string intToRoman(int num) {
//         // Arrays to hold the values and their corresponding Roman numerals
//         int values[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//         string symbols[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
//         string ans;
//         for (int i = 0; i < 13; i++) {
//             while (num >= values[i]) {
//                 ans += symbols[i];
//                 num -= values[i];
//             }
//         }
//         return ans;
//     }
// };


// class Solution {
// public:
//     string intToRoman(int num) {
//         vector<pair<int, string>> val = {
//             {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
//             {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
//             {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"}, {1, "I"}
//         };
        
//         string res;
//         for(auto [v, s] : val)
//             while(num >= v)
//                 res += s, num -= v;
//         return res;
//     }
// };


// class Solution {
// public:
//     string intToRoman(int num) {
//         if (num >= 1000) return "M"  + intToRoman(num - 1000);
//         if (num >= 900)  return "CM" + intToRoman(num - 900);
//         if (num >= 500)  return "D"  + intToRoman(num - 500);
//         if (num >= 400)  return "CD" + intToRoman(num - 400);
//         if (num >= 100)  return "C"  + intToRoman(num - 100);
//         if (num >= 90)   return "XC" + intToRoman(num - 90);
//         if (num >= 50)   return "L"  + intToRoman(num - 50);
//         if (num >= 40)   return "XL" + intToRoman(num - 40);
//         if (num >= 10)   return "X"  + intToRoman(num - 10);
//         if (num >= 9)    return "IX" + intToRoman(num - 9);
//         if (num >= 5)    return "V"  + intToRoman(num - 5);
//         if (num >= 4)    return "IV" + intToRoman(num - 4);
//         if (num >= 1)    return "I"  + intToRoman(num - 1);
//         return "";
//     }
// };

// class Solution {
// public:
//     string intToRoman(int num) {
//         int values[] =    {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
//         string symbols[] ={"M",  "CM","D", "CD","C","XC","L","XL","X","IX","V","IV","I"};

//         stringstream ss;
//         for (int i = 0; i < 13; ++i) {
//             while (num >= values[i]) {
//                 ss << symbols[i];
//                 num -= values[i];
//             }
//         }
//         return ss.str();
//     }
// };

// class Solution {
// public:
//     string intToRoman(int num) {
//         map<int, string, greater<int>> roman = {
//             {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"},
//             {100, "C"},  {90, "XC"},  {50, "L"},  {40, "XL"},
//             {10, "X"},   {9, "IX"},   {5, "V"},   {4, "IV"}, {1, "I"}
//         };

//         string result;
//         for (auto &entry : roman) {
//             while (num >= entry.first) {
//                 result += entry.second;
//                 num -= entry.first;
//             }
//         }
//         return result;
//     }
// };

// Ah, nice twist! Let's do it with an unordered_map, even though unordered_map isn't naturally sorted — we’ll work around it by maintaining a separate sorted list of keys.
// This version mixes the speed of unordered_map with explicit control over order. It's kind of a hybrid between map-based and greedy vector style.
class Solution {
public:
    string intToRoman(int num) {
        unordered_map<int, string> roman = {
            {1, "I"},   {4, "IV"},   {5, "V"},   {9, "IX"},
            {10, "X"},  {40, "XL"},  {50, "L"},  {90, "XC"},
            {100, "C"}, {400, "CD"}, {500, "D"}, {900, "CM"},
            {1000, "M"}
        };

        vector<int> keys = {1000, 900, 500, 400, 100, 90, 50,
                            40, 10, 9, 5, 4, 1}; // Sorted order manually

        string result;
        for (int val : keys) {
            while (num >= val) {
                result += roman[val];
                num -= val;
            }
        }
        return result;
    }
};



// Approach	                Style/Type	                    Pros
// Original                 (if-else) Manual mapping	    Classic, clear but long
// Greedy with vector	    Modern STL	                    Short, readable, scalable
// Index lookup	            Prebuilt arrays	                Fastest for fixed range (1–3999)
// Parallel arrays	        C-style minimal STL          	Memory-light, elegant
// Recursive	            Elegant recursive	            Very clean, fun to write
// stringstream version	    Cleaner greedy loop	            Slight performance/memory edge
