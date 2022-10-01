// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_P_H
#define QTAWS_DELETEUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserRequest;

class DeleteUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteUserRequest * const q);
    DeleteUserRequestPrivate(const DeleteUserRequestPrivate &other,
                                   DeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
