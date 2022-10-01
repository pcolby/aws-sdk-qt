// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERPOOLMFACONFIGREQUEST_P_H
#define QTAWS_GETUSERPOOLMFACONFIGREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "getuserpoolmfaconfigrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetUserPoolMfaConfigRequest;

class GetUserPoolMfaConfigRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    GetUserPoolMfaConfigRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   GetUserPoolMfaConfigRequest * const q);
    GetUserPoolMfaConfigRequestPrivate(const GetUserPoolMfaConfigRequestPrivate &other,
                                   GetUserPoolMfaConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserPoolMfaConfigRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
