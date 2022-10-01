// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTDEVICEAUTHORIZATIONRESPONSE_H
#define QTAWS_STARTDEVICEAUTHORIZATIONRESPONSE_H

#include "ssooidcresponse.h"
#include "startdeviceauthorizationrequest.h"

namespace QtAws {
namespace SsoOidc {

class StartDeviceAuthorizationResponsePrivate;

class QTAWSSSOOIDC_EXPORT StartDeviceAuthorizationResponse : public SsoOidcResponse {
    Q_OBJECT

public:
    StartDeviceAuthorizationResponse(const StartDeviceAuthorizationRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartDeviceAuthorizationRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartDeviceAuthorizationResponse)
    Q_DISABLE_COPY(StartDeviceAuthorizationResponse)

};

} // namespace SsoOidc
} // namespace QtAws

#endif
