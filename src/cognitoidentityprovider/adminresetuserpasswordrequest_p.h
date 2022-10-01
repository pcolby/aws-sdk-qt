// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINRESETUSERPASSWORDREQUEST_P_H
#define QTAWS_ADMINRESETUSERPASSWORDREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminresetuserpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminResetUserPasswordRequest;

class AdminResetUserPasswordRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminResetUserPasswordRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminResetUserPasswordRequest * const q);
    AdminResetUserPasswordRequestPrivate(const AdminResetUserPasswordRequestPrivate &other,
                                   AdminResetUserPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminResetUserPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
