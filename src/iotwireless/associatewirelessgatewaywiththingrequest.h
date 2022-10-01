// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGREQUEST_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHTHINGREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithThingRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessGatewayWithThingRequest : public IoTWirelessRequest {

public:
    AssociateWirelessGatewayWithThingRequest(const AssociateWirelessGatewayWithThingRequest &other);
    AssociateWirelessGatewayWithThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessGatewayWithThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
