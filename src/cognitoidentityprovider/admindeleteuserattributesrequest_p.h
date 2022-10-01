// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINDELETEUSERATTRIBUTESREQUEST_P_H
#define QTAWS_ADMINDELETEUSERATTRIBUTESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admindeleteuserattributesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminDeleteUserAttributesRequest;

class AdminDeleteUserAttributesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminDeleteUserAttributesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminDeleteUserAttributesRequest * const q);
    AdminDeleteUserAttributesRequestPrivate(const AdminDeleteUserAttributesRequestPrivate &other,
                                   AdminDeleteUserAttributesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminDeleteUserAttributesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
