// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINENABLEUSERREQUEST_P_H
#define QTAWS_ADMINENABLEUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminenableuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminEnableUserRequest;

class AdminEnableUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminEnableUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminEnableUserRequest * const q);
    AdminEnableUserRequestPrivate(const AdminEnableUserRequestPrivate &other,
                                   AdminEnableUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminEnableUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
