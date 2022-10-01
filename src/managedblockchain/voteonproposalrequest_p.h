// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VOTEONPROPOSALREQUEST_P_H
#define QTAWS_VOTEONPROPOSALREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "voteonproposalrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class VoteOnProposalRequest;

class VoteOnProposalRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    VoteOnProposalRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   VoteOnProposalRequest * const q);
    VoteOnProposalRequestPrivate(const VoteOnProposalRequestPrivate &other,
                                   VoteOnProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(VoteOnProposalRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
