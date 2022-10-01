// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_VERIFYSOFTWARETOKENREQUEST_P_H
#define QTAWS_VERIFYSOFTWARETOKENREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "verifysoftwaretokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class VerifySoftwareTokenRequest;

class VerifySoftwareTokenRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    VerifySoftwareTokenRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   VerifySoftwareTokenRequest * const q);
    VerifySoftwareTokenRequestPrivate(const VerifySoftwareTokenRequestPrivate &other,
                                   VerifySoftwareTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(VerifySoftwareTokenRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
