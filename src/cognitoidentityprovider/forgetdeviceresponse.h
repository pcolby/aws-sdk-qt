// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_FORGETDEVICERESPONSE_H
#define QTAWS_FORGETDEVICERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "forgetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class ForgetDeviceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT ForgetDeviceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    ForgetDeviceResponse(const ForgetDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ForgetDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ForgetDeviceResponse)
    Q_DISABLE_COPY(ForgetDeviceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
