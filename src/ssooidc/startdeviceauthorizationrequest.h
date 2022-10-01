// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICEAUTHORIZATIONREQUEST_H
#define QTAWS_STARTDEVICEAUTHORIZATIONREQUEST_H

#include "ssooidcrequest.h"

namespace QtAws {
namespace SsoOidc {

class StartDeviceAuthorizationRequestPrivate;

class QTAWSSSOOIDC_EXPORT StartDeviceAuthorizationRequest : public SsoOidcRequest {

public:
    StartDeviceAuthorizationRequest(const StartDeviceAuthorizationRequest &other);
    StartDeviceAuthorizationRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeviceAuthorizationRequest)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
