// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEPROFILERESPONSE_H
#define QTAWS_GETDEVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "getdeviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class GetDeviceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetDeviceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetDeviceProfileResponse(const GetDeviceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceProfileResponse)
    Q_DISABLE_COPY(GetDeviceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
