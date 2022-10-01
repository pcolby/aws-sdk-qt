// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSREQUEST_P_H
#define QTAWS_LISTMEMBERSREQUEST_P_H

#include "managedblockchainrequest_p.h"
#include "listmembersrequest.h"

namespace QtAws {
namespace ManagedBlockchain {

class ListMembersRequest;

class ListMembersRequestPrivate : public ManagedBlockchainRequestPrivate {

public:
    ListMembersRequestPrivate(const ManagedBlockchainRequest::Action action,
                                   ListMembersRequest * const q);
    ListMembersRequestPrivate(const ListMembersRequestPrivate &other,
                                   ListMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMembersRequest)

};

} // namespace ManagedBlockchain
} // namespace QtAws

#endif
