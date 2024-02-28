//
//  Improved Captcha
//  My program
//
//  Created by saus on 2/22/24.
//

#include <iostream>
using namespace std;
int main(){
  char captcha {};
  cout << "captcha 1 or 2" << endl;
  cin >> captcha;
  if (captcha == 1)
  {
     char answer {};
  cout << "𝙘𝙖𝙥𝙩𝙘𝙝𝙖+++" << endl;
    cout << "ꍏꋪꍟ ꌩꂦꀎ ꃅꀎꂵꍏꈤ y/n" << endl;
    cin >> answer;
    while (true)
      {
            if (answer == 'Y' || answer == 'y')
              {
                cout << "[̲̅y][̲̅a][̲̅y][̲̅y] [̲̅y][̲̅o][̲̅u] [̲̅p][̲̅a][̲̅s][̲̅s][̲̅e][̲̅d][̲̅!][̲̅!]" << endl;
                break;
              }
            if (answer == 'N' || answer == 'n')
              {
                cout << "𝓰𝓸𝓸𝓭 𝓱𝓮𝓻𝓮 𝔀𝓮 𝓸𝓷𝓵𝔂 𝓵𝓲𝓴𝓮 𝓻𝓸𝓫𝓸𝓽𝓼 :) " << endl;
                cout << "𝖇𝖚𝖚𝖚𝖚𝖚𝖚𝖙 𝖜𝖊 𝖘𝖆𝖉𝖑𝖞 𝖈𝖆𝖓'𝖙 𝖑𝖊𝖙 𝖞𝖔𝖚 𝖙𝖍𝖗𝖔𝖚𝖌𝖍 :( " << endl;
                break;
              }
        else
          {
            cout << " Y or N (refresh to try again) " << endl;
            break;
          }
  
    
      }
  }
  else
  {
     char answer {};
      char favcolor {};
      int passthrough {};
    cout << "𝙘𝙖𝙥𝙩𝙘𝙝𝙖+++" << endl;
    cout << "guess the number" << endl;
    cout << "1-10" << endl;
    cout << "i dare you" << endl;
    cin >> answer;
    if (answer == '1')
    {
      cout << "you got it" << endl;
      cout << "ok buut that was just fun haha" << endl;
    }
    else
    {
      cout << "wrong" << endl;
      cout << "ok buut that was just fun haha" << endl;
    }
    cout << "ok select your favorite colour " << endl;
    cout << "red green blue yellow" << endl;
      cin >> favcolor;
    if (favcolor == 'g')
    {
      cout << "that is not a creative color" << endl;
      passthrough = 0;
    }
    else
    {
      cout << "that is a creative color" << endl;
      passthrough = 1;
    }
    if (passthrough == 1)
    {
      cout << "ok you passed" << endl;
    }


  }
}
