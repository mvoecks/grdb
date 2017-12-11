#include "graph.h"
#include <stdio.h>
#include <math.h>


/* Place the code for your Dijkstra implementation in this file */
int
component_sssp(
        component_t c,
        vertexid_t v1,
        vertexid_t v2,
        int *n,
        int *total_weight,
        vertexid_t **path)
{
	/* Initilaize some variables */
	schema_t schema = NULL;
	attribute_t attr = NULL;

	/*
	 * Figure out which attribute in the component edges schema you will
	 * use for your weight function
	 */

	//Set the schema to be the edge schema
	schema = c->se;
	attr = schema->attrlist;
	if(attr == NULL)
		return -1;

	//get first attribute of type int or return -1 if none exist
	while(strcmp(base_types_str[attr->bt], "INT") != 0){
		attr = attr->next;
		if(attr == NULL)
			return -1;
	}

	/*
	 * Execute Dijkstra on the attribute you found for the specified
	 * component
	 */
	//Initialize some new variables
	struct vertex *vert = NULL;
	vert = c->v;

	int i = 1;
	while(vert != NULL){
		i++;
		vert = vert->next;
	}
	fprintf("%d", i);	
	/* Change this as needed */
	return (-1);
}
