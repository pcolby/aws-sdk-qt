// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKREQUEST_P_H
#define QTAWS_GETNETWORKREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "getnetworkrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetNetworkRequest;

class GetNetworkRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    GetNetworkRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   GetNetworkRequest * const q);
    GetNetworkRequestPrivate(const GetNetworkRequestPrivate &other,
                                   GetNetworkRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
