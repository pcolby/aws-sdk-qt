// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERATTRIBUTEVERIFICATIONCODEREQUEST_P_H
#define QTAWS_GETUSERATTRIBUTEVERIFICATIONCODEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getuserattributeverificationcoderequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserAttributeVerificationCodeRequest;

class GetUserAttributeVerificationCodeRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetUserAttributeVerificationCodeRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetUserAttributeVerificationCodeRequest * const q);
    GetUserAttributeVerificationCodeRequestPrivate(const GetUserAttributeVerificationCodeRequestPrivate &other,
                                   GetUserAttributeVerificationCodeRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserAttributeVerificationCodeRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
