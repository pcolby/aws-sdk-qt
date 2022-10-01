// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATERESPONSE_P_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromCertificateResponse;

class DisassociateWirelessGatewayFromCertificateResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit DisassociateWirelessGatewayFromCertificateResponsePrivate(DisassociateWirelessGatewayFromCertificateResponse * const q);

    void parseDisassociateWirelessGatewayFromCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateWirelessGatewayFromCertificateResponse)
    Q_DISABLE_COPY(DisassociateWirelessGatewayFromCertificateResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
