// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYUSERATTRIBUTEREQUEST_P_H
#define QTAWS_VERIFYUSERATTRIBUTEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "verifyuserattributerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifyUserAttributeRequest;

class VerifyUserAttributeRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    VerifyUserAttributeRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   VerifyUserAttributeRequest * const q);
    VerifyUserAttributeRequestPrivate(const VerifyUserAttributeRequestPrivate &other,
                                   VerifyUserAttributeRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifyUserAttributeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
