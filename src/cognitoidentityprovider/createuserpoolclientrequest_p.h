// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLCLIENTREQUEST_P_H
#define QTAWS_CREATEUSERPOOLCLIENTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolClientRequest;

class CreateUserPoolClientRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateUserPoolClientRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateUserPoolClientRequest * const q);
    CreateUserPoolClientRequestPrivate(const CreateUserPoolClientRequestPrivate &other,
                                   CreateUserPoolClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
