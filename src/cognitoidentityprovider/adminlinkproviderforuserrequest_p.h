// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLINKPROVIDERFORUSERREQUEST_P_H
#define QTAWS_ADMINLINKPROVIDERFORUSERREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminlinkproviderforuserrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminLinkProviderForUserRequest;

class AdminLinkProviderForUserRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminLinkProviderForUserRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminLinkProviderForUserRequest * const q);
    AdminLinkProviderForUserRequestPrivate(const AdminLinkProviderForUserRequestPrivate &other,
                                   AdminLinkProviderForUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminLinkProviderForUserRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
