// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETUSERPOOLMFACONFIGREQUEST_P_H
#define QTAWS_SETUSERPOOLMFACONFIGREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "setuserpoolmfaconfigrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class SetUserPoolMfaConfigRequest;

class SetUserPoolMfaConfigRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    SetUserPoolMfaConfigRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   SetUserPoolMfaConfigRequest * const q);
    SetUserPoolMfaConfigRequestPrivate(const SetUserPoolMfaConfigRequestPrivate &other,
                                   SetUserPoolMfaConfigRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetUserPoolMfaConfigRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
