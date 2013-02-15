#include <stdio.h>


struct account {
   char username[8];
   char password[8];
   int uid;
};

int main(void)
{
   struct account user1;
   struct account user2 = {"john", "doe", 2};
   user1.uid = 1;

   printf("uid: %d\n", user1.uid);
   printf("username: %s\n", user2.username);
   return 0;
}
