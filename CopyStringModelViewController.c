//
//  CopyStringModelViewController.c
//  Copy String
//
//  Created by Mewlan Musajan on 10/22/17.
//  Copyright (c) 2017 Mewlan Musajan. All rights reserved.
//

#include <stdio.h>

void copyString(char *from, char *to);

int main(int argc, char const *argv[])
{
	model();
	return 0;
}

void model()
{
	char *a = "Copy this to string b.";
	char b[] = "string b";
	char *ptr = b;
	char *format;
	format = "string a = %s\nstring b = %s\n";
	view(a, ptr, format);
}

void view(char *a, char *ptr, char *format)
{
	printf(format, a, ptr);
	printf("\ncopy string a to string b:\n");
	controller(a, ptr);
	printf(format, a, ptr);
}

void controller(char *a, char *ptr)
{	
	copyString(a, ptr);
}

void copyString(char *from, char *to)
{
	while(*to++ = *from++);
}

