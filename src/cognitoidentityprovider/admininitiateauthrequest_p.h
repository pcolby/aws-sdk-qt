// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMININITIATEAUTHREQUEST_P_H
#define QTAWS_ADMININITIATEAUTHREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admininitiateauthrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminInitiateAuthRequest;

class AdminInitiateAuthRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminInitiateAuthRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminInitiateAuthRequest * const q);
    AdminInitiateAuthRequestPrivate(const AdminInitiateAuthRequestPrivate &other,
                                   AdminInitiateAuthRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminInitiateAuthRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
