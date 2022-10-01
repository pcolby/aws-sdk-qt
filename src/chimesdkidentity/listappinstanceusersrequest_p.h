// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPPINSTANCEUSERSREQUEST_P_H
#define QTAWS_LISTAPPINSTANCEUSERSREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "listappinstanceusersrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class ListAppInstanceUsersRequest;

class ListAppInstanceUsersRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    ListAppInstanceUsersRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   ListAppInstanceUsersRequest * const q);
    ListAppInstanceUsersRequestPrivate(const ListAppInstanceUsersRequestPrivate &other,
                                   ListAppInstanceUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListAppInstanceUsersRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
