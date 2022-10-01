// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERDEVICERESPONSE_H
#define QTAWS_REGISTERDEVICERESPONSE_H

#include "cognitosyncresponse.h"
#include "registerdevicerequest.h"

namespace QtAws {
namespace CognitoSync {

class RegisterDeviceResponsePrivate;

class QTAWSCOGNITOSYNC_EXPORT RegisterDeviceResponse : public CognitoSyncResponse {
    Q_OBJECT

public:
    RegisterDeviceResponse(const RegisterDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const RegisterDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(RegisterDeviceResponse)
    Q_DISABLE_COPY(RegisterDeviceResponse)

};

} // namespace CognitoSync
} // namespace QtAws

#endif
