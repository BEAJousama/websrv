/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   webServ.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <hbel-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:06:18 by obeaj             #+#    #+#             */
/*   Updated: 2022/11/05 15:31:03 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEBSERV_HPP
#define WEBSERV_HPP

#include "common.h"
#include "createSocket.hpp"
#include "parsing.hpp"
#include "server.hpp"
#include "client.hpp"

class webserv
{
	private:
		std::vector<createSocket>	sockets;
		std::vector<pollfd>			listning_fds;
		std::vector<int>			master_fds;
		std::map<int, client>		clients;
		Data						data;
    public:
        void init(String);
		void handleInputEvent(createSocket &, pollfd &);
		void handleOutputEvent(createSocket &, pollfd &);
		void eraseSocket(int, int);
		void setUpServer(void);
        webserv();
        webserv(String);
        ~webserv();
};

#endif // WEBSERV_HPP