/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: obeaj <obeaj@student.1337.ma>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/26 09:19:00 by obeaj             #+#    #+#             */
/*   Updated: 2022/11/02 16:53:48 by obeaj            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
#define UTILS_H


#include <iostream>
#include "common.h"
#include "createSocket.hpp"
#include "parsing.hpp"
#include "server.hpp"

std::string&    stringtrim(std::string &str);
void			printLogs(const std::string & line);
int				checkExtansion(String filename);
pollfd			*getfds(std::vector<createSocket> & sockets);
createSocket &	getsocket(std::vector<createSocket> sockets, int fd);
std::string	readFile(std::string filename);
#endif // !UTILS_H
