// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYSTATISTICSRESPONSE_H
#define QTAWS_GETWIRELESSGATEWAYSTATISTICSRESPONSE_H

#include "iotwirelessresponse.h"
#include "getwirelessgatewaystatisticsrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayStatisticsResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayStatisticsResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    GetWirelessGatewayStatisticsResponse(const GetWirelessGatewayStatisticsRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const GetWirelessGatewayStatisticsRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayStatisticsResponse)
    Q_DISABLE_COPY(GetWirelessGatewayStatisticsResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
