// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATEREQUEST_P_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "associatewirelessgatewaywithcertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithCertificateRequest;

class AssociateWirelessGatewayWithCertificateRequestPrivate : public IoTWirelessRequestPrivate {

public:
    AssociateWirelessGatewayWithCertificateRequestPrivate(const IoTWirelessRequest::Action action,
                                   AssociateWirelessGatewayWithCertificateRequest * const q);
    AssociateWirelessGatewayWithCertificateRequestPrivate(const AssociateWirelessGatewayWithCertificateRequestPrivate &other,
                                   AssociateWirelessGatewayWithCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessGatewayWithCertificateRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
