// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKRESPONSE_H
#define QTAWS_ASSOCIATEWIRELESSDEVICEWITHFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "associatewirelessdevicewithfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessDeviceWithFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessDeviceWithFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateWirelessDeviceWithFuotaTaskResponse(const AssociateWirelessDeviceWithFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWirelessDeviceWithFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessDeviceWithFuotaTaskResponse)
    Q_DISABLE_COPY(AssociateWirelessDeviceWithFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
