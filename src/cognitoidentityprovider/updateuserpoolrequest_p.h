// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERPOOLREQUEST_P_H
#define QTAWS_UPDATEUSERPOOLREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateuserpoolrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserPoolRequest;

class UpdateUserPoolRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateUserPoolRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateUserPoolRequest * const q);
    UpdateUserPoolRequestPrivate(const UpdateUserPoolRequestPrivate &other,
                                   UpdateUserPoolRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserPoolRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
