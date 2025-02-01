

class Solution {
public:
    string simplifyPath(string path) {
        vector<string> stack;
        stringstream ss(path);
        string component;

       
        while (getline(ss, component, '/')) {
            if (component == "" || component == ".") {
              
                continue;
            }
            if (component == "..") {
               
                if (!stack.empty()) {
                    stack.pop_back();
                }
            } else {
               
                stack.push_back(component);
            }
        }

     
        if (stack.empty()) {
            return "/";
        }

        string result = "/";
        for (const string& dir : stack) {
            result += dir + "/";
        }

      
        result.pop_back();
        return result;
    }
};
