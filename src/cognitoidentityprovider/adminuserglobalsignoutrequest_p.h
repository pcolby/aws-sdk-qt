// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUSERGLOBALSIGNOUTREQUEST_P_H
#define QTAWS_ADMINUSERGLOBALSIGNOUTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminuserglobalsignoutrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUserGlobalSignOutRequest;

class AdminUserGlobalSignOutRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminUserGlobalSignOutRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminUserGlobalSignOutRequest * const q);
    AdminUserGlobalSignOutRequestPrivate(const AdminUserGlobalSignOutRequestPrivate &other,
                                   AdminUserGlobalSignOutRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminUserGlobalSignOutRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
