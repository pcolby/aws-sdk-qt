// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTINVITATIONSREQUEST_P_H
#define QTAWS_LISTINVITATIONSREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listinvitationsrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListInvitationsRequest;

class ListInvitationsRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListInvitationsRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListInvitationsRequest * const q);
    ListInvitationsRequestPrivate(const ListInvitationsRequestPrivate &other,
                                   ListInvitationsRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListInvitationsRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
