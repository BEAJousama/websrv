/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hbel-hou <hbel-hou@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:02:25 by obeaj             #+#    #+#             */
/*   Updated: 2022/11/02 10:32:05 by hbel-hou         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SEVER_HPP
#define SEVER_HPP

#include "common.h"
#include "utils.h"
#include "createSocket.hpp"
class server
{
	private:
		String 				_root;
		String 				_serverName;
		String 				_host;
		Set					_locations;
		int                 _maxBodySize;
		std::vector<int>	_ports;
		Map					_errorPages;
	public:
		server();
		server(String, String, String, Set, int, std::vector<int>, Map);
		~server();
};

#endif // SEVER_HPP