// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSREQUEST_P_H
#define QTAWS_LISTNETWORKSREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listnetworksrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNetworksRequest;

class ListNetworksRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListNetworksRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListNetworksRequest * const q);
    ListNetworksRequestPrivate(const ListNetworksRequestPrivate &other,
                                   ListNetworksRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNetworksRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
