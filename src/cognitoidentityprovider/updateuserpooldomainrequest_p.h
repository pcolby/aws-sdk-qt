// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLDOMAINREQUEST_P_H
#define QTAWS_UPDATEUSERPOOLDOMAINREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolDomainRequest;

class UpdateUserPoolDomainRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateUserPoolDomainRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateUserPoolDomainRequest * const q);
    UpdateUserPoolDomainRequestPrivate(const UpdateUserPoolDomainRequestPrivate &other,
                                   UpdateUserPoolDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
