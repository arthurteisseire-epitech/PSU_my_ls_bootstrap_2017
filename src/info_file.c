/*
** EPITECH PROJECT, 2017
** File Name : info_file.c
** File description:
** By Arthur Teisseire
*/

#include <stdio.h>
#include "my.h"
#include "info.h"

void put_info(char *path_name, struct stat *sb)
{
	stat(path_name, sb);
	printf("FILE TYPE : %lu\n", sb->st_dev);
	printf("INODE : %lu\n", sb->st_ino);
	my_printf("User ID: %u\n", sb->st_uid);
	my_printf("Group ID: %u\n", sb->st_gid);
	my_printf("Last status change: %s\n", ctime(&sb->st_ctime));
	my_printf("Last file access: %s\n", ctime(&sb->st_atime));
	my_printf("Last file modification: %s\n", ctime(&sb->st_mtime));
}
