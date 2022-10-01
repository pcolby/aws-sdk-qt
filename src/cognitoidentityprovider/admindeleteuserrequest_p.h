// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERREQUEST_P_H
#define QTAWS_ADMINDELETEUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admindeleteuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserRequest;

class AdminDeleteUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminDeleteUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminDeleteUserRequest * const q);
    AdminDeleteUserRequestPrivate(const AdminDeleteUserRequestPrivate &other,
                                   AdminDeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminDeleteUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
