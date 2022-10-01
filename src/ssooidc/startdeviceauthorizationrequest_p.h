// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICEAUTHORIZATIONREQUEST_P_H
#define QTAWS_STARTDEVICEAUTHORIZATIONREQUEST_P_H

#include "ssooidcrequest_p.h"
#include "startdeviceauthorizationrequest.h"

namespace QtAws {
namespace SsoOidc {

class StartDeviceAuthorizationRequest;

class StartDeviceAuthorizationRequestPrivate : public SsoOidcRequestPrivate {

public:
    StartDeviceAuthorizationRequestPrivate(const SsoOidcRequest::Action action,
                                   StartDeviceAuthorizationRequest * const q);
    StartDeviceAuthorizationRequestPrivate(const StartDeviceAuthorizationRequestPrivate &other,
                                   StartDeviceAuthorizationRequest * const q);

private:
    Q_DECLARE_PUBLIC(StartDeviceAuthorizationRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
