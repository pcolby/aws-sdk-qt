// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DETACHSECURITYPROFILERESPONSE_H
#define QTAWS_DETACHSECURITYPROFILERESPONSE_H

#include "iotresponse.h"
#include "detachsecurityprofilerequest.h"

namespace QtAws {
namespace IoT {

class DetachSecurityProfileResponsePrivate;

class QTAWSIOT_EXPORT DetachSecurityProfileResponse : public IoTResponse {
    Q_OBJECT

public:
    DetachSecurityProfileResponse(const DetachSecurityProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DetachSecurityProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DetachSecurityProfileResponse)
    Q_DISABLE_COPY(DetachSecurityProfileResponse)

};

} // namespace IoT
} // namespace QtAws

#endif
