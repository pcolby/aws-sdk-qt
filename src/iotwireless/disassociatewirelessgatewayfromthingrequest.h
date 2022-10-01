// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGREQUEST_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMTHINGREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromThingRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessGatewayFromThingRequest : public IoTWirelessRequest {

public:
    DisassociateWirelessGatewayFromThingRequest(const DisassociateWirelessGatewayFromThingRequest &other);
    DisassociateWirelessGatewayFromThingRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessGatewayFromThingRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
