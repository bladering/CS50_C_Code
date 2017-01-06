# include "inv.h"
# include <stdio.h>
# include <stdlib.h>

int main()
{
	int ctr;
	struct invStruct *items[3]; //array of three structure variables

	for (ctr = 0; ctr < 3; ctr++)
	{
		items[ctr] = (struct invStruct*)malloc(sizeof(struct invStruct));
	        //items[ctr] is now a pointer,not a variable
		printf("what is the manufacturer of item #%d?\n",(ctr+1));
		gets(items[ctr]->manuf);
		puts("what is the model?");
		gets(items[ctr]->model);

	}

    printf("\n\n Here is the inventory: \n");

        for (ctr = 0; ctr < 3; ctr++)
	{
	      printf("#%d: Manufacturer: %s\t", (ctr+1), items[ctr]->manuf);
              printf("Model:%s\t\n", items[ctr]->model);
      }

return 0;
}


//this is the test file from Xcode

//#include
