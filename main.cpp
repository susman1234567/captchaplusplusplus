//
//  Improved Captcha
//  My program
//
//  Created by saus on 2/22/24.
//

#include <iostream>
using namespace std;
int main(){
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
