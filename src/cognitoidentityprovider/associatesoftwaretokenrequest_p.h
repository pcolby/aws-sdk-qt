// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATESOFTWARETOKENREQUEST_P_H
#define QTAWS_ASSOCIATESOFTWARETOKENREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "associatesoftwaretokenrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AssociateSoftwareTokenRequest;

class AssociateSoftwareTokenRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AssociateSoftwareTokenRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AssociateSoftwareTokenRequest * const q);
    AssociateSoftwareTokenRequestPrivate(const AssociateSoftwareTokenRequestPrivate &other,
                                   AssociateSoftwareTokenRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateSoftwareTokenRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
