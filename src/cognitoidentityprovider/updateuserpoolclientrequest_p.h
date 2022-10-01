// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLCLIENTREQUEST_P_H
#define QTAWS_UPDATEUSERPOOLCLIENTREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateuserpoolclientrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolClientRequest;

class UpdateUserPoolClientRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateUserPoolClientRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateUserPoolClientRequest * const q);
    UpdateUserPoolClientRequestPrivate(const UpdateUserPoolClientRequestPrivate &other,
                                   UpdateUserPoolClientRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolClientRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
