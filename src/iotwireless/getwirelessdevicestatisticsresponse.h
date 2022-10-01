// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICESTATISTICSRESPONSE_H
#define QTAWS_GETWIRELESSDEVICESTATISTICSRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessdevicestatisticsrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceStatisticsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessDeviceStatisticsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessDeviceStatisticsResponse(const GetWirelessDeviceStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessDeviceStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessDeviceStatisticsResponse)
    Q_DISABLE_COPY(GetWirelessDeviceStatisticsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
