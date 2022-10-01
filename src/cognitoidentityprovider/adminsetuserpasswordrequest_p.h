// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINSETUSERPASSWORDREQUEST_P_H
#define QTAWS_ADMINSETUSERPASSWORDREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminsetuserpasswordrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminSetUserPasswordRequest;

class AdminSetUserPasswordRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminSetUserPasswordRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminSetUserPasswordRequest * const q);
    AdminSetUserPasswordRequestPrivate(const AdminSetUserPasswordRequestPrivate &other,
                                   AdminSetUserPasswordRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminSetUserPasswordRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
