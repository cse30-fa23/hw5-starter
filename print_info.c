#include <stdio.h>
#include <limits.h>
#include "node.h"

#define TABLESIZE_MSG "Table size: %lu\n"
#define TOTAL_ENTRIES_MSG "Total entries: %lu\n"
#define LONGEST_MSG "Longest chain: %lu\n"
#define SHORTEST_MSG "Shortest chain: %lu\n"
#define EMPTY_MSG "Empty buckets: %lu\n"

void print_info(node **htable, unsigned long table_size) {
	// TODO: walk down the indices of the htable
	// iterate through each chain and update statistics
	// print out statistics at end
	//
	// NOTE: all your statistics variables should be of type
	// unsigned long
	//
	// NOTE: you may use ULONG_MAX if you want
	// (maximum value for unsigned long int)
	
	(void) htable; // suppress unused variable warnings
	(void) table_size; // TODO: delete these once you start implementation
}
