// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERPOOLCLIENTREQUEST_P_H
#define QTAWS_DELETEUSERPOOLCLIENTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserPoolClientRequest;

class DeleteUserPoolClientRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteUserPoolClientRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteUserPoolClientRequest * const q);
    DeleteUserPoolClientRequestPrivate(const DeleteUserPoolClientRequestPrivate &other,
                                   DeleteUserPoolClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
