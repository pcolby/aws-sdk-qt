// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ADMINGETDEVICERESPONSE_H
#define QTAWS_ADMINGETDEVICERESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "admingetdevicerequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class AdminGetDeviceResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT AdminGetDeviceResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    AdminGetDeviceResponse(const AdminGetDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AdminGetDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AdminGetDeviceResponse)
    Q_DISABLE_COPY(AdminGetDeviceResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
