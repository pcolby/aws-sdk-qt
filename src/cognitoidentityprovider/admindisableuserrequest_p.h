// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEUSERREQUEST_P_H
#define QTAWS_ADMINDISABLEUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admindisableuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableUserRequest;

class AdminDisableUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminDisableUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminDisableUserRequest * const q);
    AdminDisableUserRequestPrivate(const AdminDisableUserRequestPrivate &other,
                                   AdminDisableUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminDisableUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
