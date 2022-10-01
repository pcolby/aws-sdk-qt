// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEPROPOSALREQUEST_P_H
#define QTAWS_CREATEPROPOSALREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "createproposalrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class CreateProposalRequest;

class CreateProposalRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    CreateProposalRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   CreateProposalRequest * const q);
    CreateProposalRequestPrivate(const CreateProposalRequestPrivate &other,
                                   CreateProposalRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateProposalRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
