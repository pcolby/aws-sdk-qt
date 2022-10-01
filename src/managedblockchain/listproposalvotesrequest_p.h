// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPROPOSALVOTESREQUEST_P_H
#define QTAWS_LISTPROPOSALVOTESREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listproposalvotesrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListProposalVotesRequest;

class ListProposalVotesRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListProposalVotesRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListProposalVotesRequest * const q);
    ListProposalVotesRequestPrivate(const ListProposalVotesRequestPrivate &other,
                                   ListProposalVotesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListProposalVotesRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
