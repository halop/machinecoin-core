// Copyright (c) 2016-2018 The Machinecoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#ifndef MACHINECOIN_WALLET_TEST_FIXTURE_H
#define MACHINECOIN_WALLET_TEST_FIXTURE_H

#include <test/test_machinecoin.h>

#include <wallet/wallet.h>

#include <memory>

/** Testing setup and teardown for wallet.
 */
struct WalletTestingSetup: public TestingSetup {
    explicit WalletTestingSetup(const std::string& chainName = CBaseChainParams::MAIN);
    ~WalletTestingSetup();

    std::unique_ptr<CWallet> pwalletMain;
};

#endif

