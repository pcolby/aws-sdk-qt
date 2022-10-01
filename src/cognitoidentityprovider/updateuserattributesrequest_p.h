// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERATTRIBUTESREQUEST_P_H
#define QTAWS_UPDATEUSERATTRIBUTESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updateuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateUserAttributesRequest;

class UpdateUserAttributesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateUserAttributesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateUserAttributesRequest * const q);
    UpdateUserAttributesRequestPrivate(const UpdateUserAttributesRequestPrivate &other,
                                   UpdateUserAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
