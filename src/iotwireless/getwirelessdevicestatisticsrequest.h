// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSDEVICESTATISTICSREQUEST_H
#define QTAWS_GETWIRELESSDEVICESTATISTICSREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessDeviceStatisticsRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessDeviceStatisticsRequest : public IoTWirelessRequest {

public:
    GetWirelessDeviceStatisticsRequest(const GetWirelessDeviceStatisticsRequest &other);
    GetWirelessDeviceStatisticsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessDeviceStatisticsRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
