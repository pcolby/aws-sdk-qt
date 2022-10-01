// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATUSRESPONSE_H
#define QTAWS_UPDATEDEVICESTATUSRESPONSE_H

#include "cognitoidentityproviderresponse.h"
#include "updatedevicestatusrequest.h"

namespace QtAws {
namespace CognitoIdentityProvider {

class UpdateDeviceStatusResponsePrivate;

class QTAWSCOGNITOIDENTITYPROVIDER_EXPORT UpdateDeviceStatusResponse : public CognitoIdentityProviderResponse {
    Q_OBJECT

public:
    UpdateDeviceStatusResponse(const UpdateDeviceStatusRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceStatusRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceStatusResponse)
    Q_DISABLE_COPY(UpdateDeviceStatusResponse)

};

} // namespace CognitoIdentityProvider
} // namespace QtAws

#endif
