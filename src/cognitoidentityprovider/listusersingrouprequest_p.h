// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTUSERSINGROUPREQUEST_P_H
#define QTAWS_LISTUSERSINGROUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "listusersingrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ListUsersInGroupRequest;

class ListUsersInGroupRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ListUsersInGroupRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ListUsersInGroupRequest * const q);
    ListUsersInGroupRequestPrivate(const ListUsersInGroupRequestPrivate &other,
                                   ListUsersInGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListUsersInGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
