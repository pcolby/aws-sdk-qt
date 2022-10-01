// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CONFIRMDEVICERESPONSE_H
#define QTAWS_CONFIRMDEVICERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "confirmdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ConfirmDeviceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ConfirmDeviceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ConfirmDeviceResponse(const ConfirmDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ConfirmDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ConfirmDeviceResponse)
    Q_DISABLE_COPY(ConfirmDeviceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
