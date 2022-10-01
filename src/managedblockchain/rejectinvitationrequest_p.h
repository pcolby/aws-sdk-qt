// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REJECTINVITATIONREQUEST_P_H
#define QTAWS_REJECTINVITATIONREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "rejectinvitationrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class RejectInvitationRequest;

class RejectInvitationRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    RejectInvitationRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   RejectInvitationRequest * const q);
    RejectInvitationRequestPrivate(const RejectInvitationRequestPrivate &other,
                                   RejectInvitationRequest * const q);

private:
    Q_DECLARE_PUBLIC(RejectInvitationRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
