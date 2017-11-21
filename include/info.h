/*
** EPITECH PROJECT, 2017
** File Name : info.h
** File description:
** By Arthur Teisseire
*/

#ifndef INFO_H
#define INFO_H

#include <sys/types.h>
#include <sys/stat.h>
#include <time.h>
#include <unistd.h>

void put_info(char *file_name, struct stat *sb);

#endif
