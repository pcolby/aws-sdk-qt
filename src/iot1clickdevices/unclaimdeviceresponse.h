// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNCLAIMDEVICERESPONSE_H
#define QTAWS_UNCLAIMDEVICERESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "unclaimdevicerequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class UnclaimDeviceResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT UnclaimDeviceResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    UnclaimDeviceResponse(const UnclaimDeviceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const UnclaimDeviceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UnclaimDeviceResponse)
    Q_DISABLE_COPY(UnclaimDeviceResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
