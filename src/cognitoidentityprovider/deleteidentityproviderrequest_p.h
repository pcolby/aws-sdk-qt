// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEIDENTITYPROVIDERREQUEST_P_H
#define QTAWS_DELETEIDENTITYPROVIDERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteidentityproviderrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteIdentityProviderRequest;

class DeleteIdentityProviderRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteIdentityProviderRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteIdentityProviderRequest * const q);
    DeleteIdentityProviderRequestPrivate(const DeleteIdentityProviderRequestPrivate &other,
                                   DeleteIdentityProviderRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteIdentityProviderRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
