// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLDOMAINREQUEST_P_H
#define QTAWS_CREATEUSERPOOLDOMAINREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolDomainRequest;

class CreateUserPoolDomainRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateUserPoolDomainRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateUserPoolDomainRequest * const q);
    CreateUserPoolDomainRequestPrivate(const CreateUserPoolDomainRequestPrivate &other,
                                   CreateUserPoolDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
