// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINLISTDEVICESREQUEST_P_H
#define QTAWS_ADMINLISTDEVICESREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminlistdevicesrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminListDevicesRequest;

class AdminListDevicesRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminListDevicesRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminListDevicesRequest * const q);
    AdminListDevicesRequestPrivate(const AdminListDevicesRequestPrivate &other,
                                   AdminListDevicesRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminListDevicesRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
