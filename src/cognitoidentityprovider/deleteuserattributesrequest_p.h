// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERATTRIBUTESREQUEST_P_H
#define QTAWS_DELETEUSERATTRIBUTESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "deleteuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class DeleteUserAttributesRequest;

class DeleteUserAttributesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    DeleteUserAttributesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   DeleteUserAttributesRequest * const q);
    DeleteUserAttributesRequestPrivate(const DeleteUserAttributesRequestPrivate &other,
                                   DeleteUserAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
