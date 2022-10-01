// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMEMBERSREQUEST_P_H
#define QTAWS_LISTMEMBERSREQUEST_P_H

#include "securityhubrequest_p.h"
#include "listmembersrequest.h"

namespace QtAws {
namespace SecurityHub {

class ListMembersRequest;

class ListMembersRequestPrivate : public SecurityHubRequestPrivate {

public:
    ListMembersRequestPrivate(const SecurityHubRequest::Action action,
                                   ListMembersRequest * const q);
    ListMembersRequestPrivate(const ListMembersRequestPrivate &other,
                                   ListMembersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListMembersRequest)

};

} // namespace SecurityHub
} // namespace QtAws

#endif
