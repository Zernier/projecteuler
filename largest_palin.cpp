#include <bits/stdc++.h>

using namespace std;

bool palin_check(string phrase) {
string phrase_p = "";

    int length1 = phrase.size();
    for (int i = 0; i <=length1-1; i++) {
        phrase_p += phrase[length1-1-i];
        }

  if(phrase == phrase_p)
  {
    return true;
  }
  else {
    return false;
  }
}
 
int main() {
int max = 0;
for (int i = 1; i < 1000; i++) {
    for (int j = 1; j < 1000; j++) {
        string palin = to_string(j*i);
        if (palin_check(palin)) {
            if (stoi(palin) > max) {
                max = stoi(palin);
            }
        }



    }

}

cout << max;


}
