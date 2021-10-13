#include "types.h"
#include "stat.h"
#include "user.h"
#include "pstat.h"

// TODO: Register in Makefile
int main(int argc, char *argv[])
{
    //TODO: Implement test function for reading pstat table
	int i;
	struct pstat table;
	getpinfo(&table);
	for (i = 0; i < 25; i++)
	{
	//if (!table.inuse[i])
	//continue;
	printf(1, "Use: %d   Tickets: %d   PID: %d   Ticks: %d\n", table.inuse[i], table.tickets[i], table.pid[i], table.ticks[i]);
	}
    exit();
}
