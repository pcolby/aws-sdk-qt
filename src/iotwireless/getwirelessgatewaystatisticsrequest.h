// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYSTATISTICSREQUEST_H
#define QTAWS_GETWIRELESSGATEWAYSTATISTICSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayStatisticsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayStatisticsRequest : public IoTWirelessRequest {

public:
    GetWirelessGatewayStatisticsRequest(const GetWirelessGatewayStatisticsRequest &other);
    GetWirelessGatewayStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayStatisticsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
