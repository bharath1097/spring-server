// Copyright (c) 2016 Brian Barto
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the MIT License. See LICENSE for more details.

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "main.h"
#include "commands.h"
#include "socklist.h"

void load_commands(void) {

	// Populate commands
}

int periodic(void) {

	if (write(mainsockfd, "beat", 4) < 0)
		return -1;
	
	return 0;
}

int comp_type(void) {
	return CLIENT;
}
