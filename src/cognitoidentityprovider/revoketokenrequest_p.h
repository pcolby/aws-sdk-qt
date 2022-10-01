// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKETOKENREQUEST_P_H
#define QTAWS_REVOKETOKENREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "revoketokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class RevokeTokenRequest;

class RevokeTokenRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    RevokeTokenRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   RevokeTokenRequest * const q);
    RevokeTokenRequestPrivate(const RevokeTokenRequestPrivate &other,
                                   RevokeTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeTokenRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
