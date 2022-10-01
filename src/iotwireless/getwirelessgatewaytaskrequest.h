// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYTASKREQUEST_H
#define QTAWS_GETWIRELESSGATEWAYTASKREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayTaskRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayTaskRequest : public IoTWirelessRequest {

public:
    GetWirelessGatewayTaskRequest(const GetWirelessGatewayTaskRequest &other);
    GetWirelessGatewayTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayTaskRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
