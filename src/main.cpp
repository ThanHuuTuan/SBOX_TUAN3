#include <bits/stdc++.h>
#include "user.h"

using namespace std;

 main(){
    while(1){
        cout << "\n-------MENU------\n"
                "1.Register\n"
                "2.Login\n"
                "3.Send Message\n"
                "4.Message\n"
                "5.View Detail Message\n"
                "6.Add Friend\n"
                "7.List Friend\n"
                "8.Block\n"
                "9.Logout\n"
                "----------->SELECT:";

        char choose;
        cin >> choose;
        User u = User();
        switch(choose){
            case '1':
                u.Register();
                break;
            case '2':
                u.LogIn();
                break;
            case '3':
                u.SendMess(u.id);
                break;
            case '4':
                u.ShowMess(u.id);
                break;
            case '5':
                u.ShowMessDetail(u.id);
                break;
            case '6':
                u.AddFriend(u.id);
                break;
            case '7':
                u.ShowFriend(u.id);
                break;
            case '8':
                u.BlockFriend(u.id);
                break;
            case '9':
                u.LogOut();
                break;
            default:
                cout << "\nIncorrect\n";
                break;
        }

    }

	return 0;
}
