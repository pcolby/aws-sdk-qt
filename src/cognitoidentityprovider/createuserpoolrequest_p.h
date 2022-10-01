// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEUSERPOOLREQUEST_P_H
#define QTAWS_CREATEUSERPOOLREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateUserPoolRequest;

class CreateUserPoolRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateUserPoolRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateUserPoolRequest * const q);
    CreateUserPoolRequestPrivate(const CreateUserPoolRequestPrivate &other,
                                   CreateUserPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
