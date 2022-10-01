// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEWIRELESSGATEWAYREQUEST_H
#define QTAWS_UPDATEWIRELESSGATEWAYREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class UpdateWirelessGatewayRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT UpdateWirelessGatewayRequest : public IoTWirelessRequest {

public:
    UpdateWirelessGatewayRequest(const UpdateWirelessGatewayRequest &other);
    UpdateWirelessGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(UpdateWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
