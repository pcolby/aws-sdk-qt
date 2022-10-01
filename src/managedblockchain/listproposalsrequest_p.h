// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALSREQUEST_P_H
#define QTAWS_LISTPROPOSALSREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listproposalsrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalsRequest;

class ListProposalsRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListProposalsRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListProposalsRequest * const q);
    ListProposalsRequestPrivate(const ListProposalsRequestPrivate &other,
                                   ListProposalsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProposalsRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
