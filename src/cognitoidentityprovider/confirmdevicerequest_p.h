// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMDEVICEREQUEST_P_H
#define QTAWS_CONFIRMDEVICEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "confirmdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmDeviceRequest;

class ConfirmDeviceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ConfirmDeviceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ConfirmDeviceRequest * const q);
    ConfirmDeviceRequestPrivate(const ConfirmDeviceRequestPrivate &other,
                                   ConfirmDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ConfirmDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
