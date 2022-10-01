// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETDEVICEMETHODSRESPONSE_H
#define QTAWS_GETDEVICEMETHODSRESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "getdevicemethodsrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class GetDeviceMethodsResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT GetDeviceMethodsResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    GetDeviceMethodsResponse(const GetDeviceMethodsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetDeviceMethodsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetDeviceMethodsResponse)
    Q_DISABLE_COPY(GetDeviceMethodsResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
