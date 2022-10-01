// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINFORGETDEVICEREQUEST_P_H
#define QTAWS_ADMINFORGETDEVICEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminforgetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminForgetDeviceRequest;

class AdminForgetDeviceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminForgetDeviceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminForgetDeviceRequest * const q);
    AdminForgetDeviceRequestPrivate(const AdminForgetDeviceRequestPrivate &other,
                                   AdminForgetDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminForgetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
