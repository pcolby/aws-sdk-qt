// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNODESREQUEST_P_H
#define QTAWS_LISTNODESREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listnodesrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListNodesRequest;

class ListNodesRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListNodesRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListNodesRequest * const q);
    ListNodesRequestPrivate(const ListNodesRequestPrivate &other,
                                   ListNodesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListNodesRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
