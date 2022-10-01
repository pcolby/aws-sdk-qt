// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEUSERATTRIBUTESREQUEST_P_H
#define QTAWS_ADMINUPDATEUSERATTRIBUTESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminupdateuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateUserAttributesRequest;

class AdminUpdateUserAttributesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminUpdateUserAttributesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminUpdateUserAttributesRequest * const q);
    AdminUpdateUserAttributesRequestPrivate(const AdminUpdateUserAttributesRequestPrivate &other,
                                   AdminUpdateUserAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminUpdateUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
