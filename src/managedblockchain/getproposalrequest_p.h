// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETPROPOSALREQUEST_P_H
#define QTAWS_GETPROPOSALREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "getproposalrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class GetProposalRequest;

class GetProposalRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    GetProposalRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   GetProposalRequest * const q);
    GetProposalRequestPrivate(const GetProposalRequestPrivate &other,
                                   GetProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetProposalRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
