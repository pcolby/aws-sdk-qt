// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEWIRELESSGATEWAYREQUEST_H
#define QTAWS_CREATEWIRELESSGATEWAYREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class CreateWirelessGatewayRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT CreateWirelessGatewayRequest : public IoTWirelessRequest {

public:
    CreateWirelessGatewayRequest(const CreateWirelessGatewayRequest &other);
    CreateWirelessGatewayRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateWirelessGatewayRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
