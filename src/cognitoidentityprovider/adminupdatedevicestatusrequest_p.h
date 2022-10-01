// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINUPDATEDEVICESTATUSREQUEST_P_H
#define QTAWS_ADMINUPDATEDEVICESTATUSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "adminupdatedevicestatusrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminUpdateDeviceStatusRequest;

class AdminUpdateDeviceStatusRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    AdminUpdateDeviceStatusRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   AdminUpdateDeviceStatusRequest * const q);
    AdminUpdateDeviceStatusRequestPrivate(const AdminUpdateDeviceStatusRequestPrivate &other,
                                   AdminUpdateDeviceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(AdminUpdateDeviceStatusRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
