// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATERESOURCESERVERREQUEST_P_H
#define QTAWS_CREATERESOURCESERVERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "createresourceserverrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class CreateResourceServerRequest;

class CreateResourceServerRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    CreateResourceServerRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   CreateResourceServerRequest * const q);
    CreateResourceServerRequestPrivate(const CreateResourceServerRequestPrivate &other,
                                   CreateResourceServerRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateResourceServerRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
