// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETDEVICEREQUEST_P_H
#define QTAWS_FORGETDEVICEREQUEST_P_H

#include "cognitoidentityproviderrequest_p.h"
#include "forgetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgetDeviceRequest;

class ForgetDeviceRequestPrivate : public CognitoIdentityProviderRequestPrivate {

public:
    ForgetDeviceRequestPrivate(const CognitoIdentityProviderRequest::Action action,
                                   ForgetDeviceRequest * const q);
    ForgetDeviceRequestPrivate(const ForgetDeviceRequestPrivate &other,
                                   ForgetDeviceRequest * const q);

private:
    Q_DECLARE_PUBLIC(ForgetDeviceRequest)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
