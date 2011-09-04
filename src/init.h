// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2011 The SolidCoin developers
// Distributed under the MIT/X11 software license, see the accompanying
// file license.txt or http://www.opensource.org/licenses/mit-license.php.
#ifndef SOLIDCOIN_INIT_H
#define SOLIDCOIN_INIT_H

extern CWallet* pwalletMain;

void Shutdown(void* parg);
bool AppInit(int argc, char* argv[]);
bool AppInit2(int argc, char* argv[]);

#endif
