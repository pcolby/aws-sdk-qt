// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKRESPONSE_H
#define QTAWS_DISASSOCIATEWIRELESSDEVICEFROMFUOTATASKRESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatewirelessdevicefromfuotataskrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessDeviceFromFuotaTaskResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessDeviceFromFuotaTaskResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateWirelessDeviceFromFuotaTaskResponse(const DisassociateWirelessDeviceFromFuotaTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWirelessDeviceFromFuotaTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessDeviceFromFuotaTaskResponse)
    Q_DISABLE_COPY(DisassociateWirelessDeviceFromFuotaTaskResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
