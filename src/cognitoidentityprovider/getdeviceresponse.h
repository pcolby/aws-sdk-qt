// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICERESPONSE_H
#define QTAWS_GETDEVICERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "getdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class GetDeviceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT GetDeviceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    GetDeviceResponse(const GetDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceResponse)
    Q_DISABLE_COPY(GetDeviceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
