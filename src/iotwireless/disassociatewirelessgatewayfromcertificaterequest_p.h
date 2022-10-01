// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATEREQUEST_P_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "disassociatewirelessgatewayfromcertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromCertificateRequest;

class DisassociateWirelessGatewayFromCertificateRequestPrivate : public IoTWirelessRequestPrivate {

public:
    DisassociateWirelessGatewayFromCertificateRequestPrivate(const IoTWirelessRequest::Action action,
                                   DisassociateWirelessGatewayFromCertificateRequest * const q);
    DisassociateWirelessGatewayFromCertificateRequestPrivate(const DisassociateWirelessGatewayFromCertificateRequestPrivate &other,
                                   DisassociateWirelessGatewayFromCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessGatewayFromCertificateRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
