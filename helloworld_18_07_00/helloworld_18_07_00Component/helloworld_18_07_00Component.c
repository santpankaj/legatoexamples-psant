#include "legato.h"

COMPONENT_INIT
{

	for(int i=0;i<10;i++)
	{
    LE_INFO("Hello, world.");
    LE_INFO("Value of i is %d",i);
    sleep (1);
    	if(i == 5)
    	{
    		i=0;
    	}
	}
}
