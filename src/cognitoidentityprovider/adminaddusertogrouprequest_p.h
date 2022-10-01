// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINADDUSERTOGROUPREQUEST_P_H
#define QTAWS_ADMINADDUSERTOGROUPREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminaddusertogrouprequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminAddUserToGroupRequest;

class AdminAddUserToGroupRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminAddUserToGroupRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminAddUserToGroupRequest * const q);
    AdminAddUserToGroupRequestPrivate(const AdminAddUserToGroupRequestPrivate &other,
                                   AdminAddUserToGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminAddUserToGroupRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
