// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATUSREQUEST_P_H
#define QTAWS_UPDATEDEVICESTATUSREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "updatedevicestatusrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateDeviceStatusRequest;

class UpdateDeviceStatusRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    UpdateDeviceStatusRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   UpdateDeviceStatusRequest * const q);
    UpdateDeviceStatusRequestPrivate(const UpdateDeviceStatusRequestPrivate &other,
                                   UpdateDeviceStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateDeviceStatusRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
