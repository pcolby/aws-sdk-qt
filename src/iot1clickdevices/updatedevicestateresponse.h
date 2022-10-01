// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEDEVICESTATERESPONSE_H
#define QTAWS_UPDATEDEVICESTATERESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "updatedevicestaterequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UpdateDeviceStateResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT UpdateDeviceStateResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    UpdateDeviceStateResponse(const UpdateDeviceStateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UpdateDeviceStateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateDeviceStateResponse)
    Q_DISABLE_COPY(UpdateDeviceStateResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
