class Solution{

public:

    int minLength(string s, int n) {

        // code here

        unordered_set<string> rem ({"12", "21", "34", "43", "56", "65", "78", "87", "09", "90"});

        vector<char> st;

        int last = -1;

        for (char ch : s) {

            st.push_back(ch);

            last++;

            if (last >= 1) {

                string temp = "";

                temp += st[last];

                temp += st[last - 1];

                if (rem.find(temp) != rem.end()) {

                    st.pop_back();

                    st.pop_back();

                    last -= 2;

                }

            }

        }

        return last + 1;

    } 

};
