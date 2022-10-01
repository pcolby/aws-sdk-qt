// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETDEVICEREQUEST_P_H
#define QTAWS_ADMINGETDEVICEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "admingetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetDeviceRequest;

class AdminGetDeviceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminGetDeviceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminGetDeviceRequest * const q);
    AdminGetDeviceRequestPrivate(const AdminGetDeviceRequestPrivate &other,
                                   AdminGetDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminGetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
