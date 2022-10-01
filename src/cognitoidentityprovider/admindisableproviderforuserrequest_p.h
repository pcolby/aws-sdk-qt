// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDISABLEPROVIDERFORUSERREQUEST_P_H
#define QTAWS_ADMINDISABLEPROVIDERFORUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admindisableproviderforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDisableProviderForUserRequest;

class AdminDisableProviderForUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminDisableProviderForUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminDisableProviderForUserRequest * const q);
    AdminDisableProviderForUserRequestPrivate(const AdminDisableProviderForUserRequestPrivate &other,
                                   AdminDisableProviderForUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminDisableProviderForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
