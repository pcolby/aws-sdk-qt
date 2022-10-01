// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_CREATEIDENTITYPROVIDERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateIdentityProviderRequest;

class CreateIdentityProviderRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateIdentityProviderRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateIdentityProviderRequest * const q);
    CreateIdentityProviderRequestPrivate(const CreateIdentityProviderRequestPrivate &other,
                                   CreateIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
