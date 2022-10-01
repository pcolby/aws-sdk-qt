// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLDOMAINREQUEST_P_H
#define QTAWS_DELETEUSERPOOLDOMAINREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteuserpooldomainrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolDomainRequest;

class DeleteUserPoolDomainRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteUserPoolDomainRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteUserPoolDomainRequest * const q);
    DeleteUserPoolDomainRequestPrivate(const DeleteUserPoolDomainRequestPrivate &other,
                                   DeleteUserPoolDomainRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserPoolDomainRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
