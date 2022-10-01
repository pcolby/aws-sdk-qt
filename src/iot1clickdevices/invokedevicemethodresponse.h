// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVOKEDEVICEMETHODRESPONSE_H
#define QTAWS_INVOKEDEVICEMETHODRESPONSE_H

#include "iot1clickdevicesresponse.h"
#include "invokedevicemethodrequest.h"

namespace QtAws {
namespace IoT1ClickDevices {

class InvokeDeviceMethodResponsePrivate;

class QTAWSIOT1CLICKDEVICES_EXPORT InvokeDeviceMethodResponse : public IoT1ClickDevicesResponse {
    Q_OBJECT

public:
    InvokeDeviceMethodResponse(const InvokeDeviceMethodRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const InvokeDeviceMethodRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(InvokeDeviceMethodResponse)
    Q_DISABLE_COPY(InvokeDeviceMethodResponse)

};

} // namespace IoT1ClickDevices
} // namespace QtAws

#endif
