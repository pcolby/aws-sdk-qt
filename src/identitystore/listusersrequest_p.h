// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSREQUEST_P_H
#define QTAWS_LISTUSERSREQUEST_P_H

#include "identitystorerequest_p.h"
#include "listusersrequest.h"

namespace QtAws {
namespace IdentityStore {

class ListUsersRequest;

class ListUsersRequestPrivate : public IdentityStoreRequestPrivate {

public:
    ListUsersRequestPrivate(const IdentityStoreRequest::Action action,
                                   ListUsersRequest * const q);
    ListUsersRequestPrivate(const ListUsersRequestPrivate &other,
                                   ListUsersRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsersRequest)

};

} // namespace IdentityStore
} // namespace QtAws

#endif
