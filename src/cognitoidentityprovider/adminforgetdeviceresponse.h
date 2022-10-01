// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINFORGETDEVICERESPONSE_H
#define QTAWS_ADMINFORGETDEVICERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "adminforgetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminForgetDeviceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminForgetDeviceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminForgetDeviceResponse(const AdminForgetDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminForgetDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminForgetDeviceResponse)
    Q_DISABLE_COPY(AdminForgetDeviceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
