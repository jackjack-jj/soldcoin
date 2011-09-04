// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2011 The SolidCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.
#ifndef SOLIDCOIN_IRC_H
#define SOLIDCOIN_IRC_H

bool RecvLine(SOCKET hSocket, std::string& strLine);
void ThreadIRCSeed(void* parg);

extern int nGotIRCAddresses;
extern bool fGotExternalIP;

#endif
