// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDEVICEPROFILERESPONSE_H
#define QTAWS_CREATEDEVICEPROFILERESPONSE_H

#include "iotwirelessresponse.h"
#include "createdeviceprofilerequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateDeviceProfileResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT CreateDeviceProfileResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    CreateDeviceProfileResponse(const CreateDeviceProfileRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateDeviceProfileRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateDeviceProfileResponse)
    Q_DISABLE_COPY(CreateDeviceProfileResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
