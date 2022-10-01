// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATERESPONSE_P_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithCertificateResponse;

class AssociateWirelessGatewayWithCertificateResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit AssociateWirelessGatewayWithCertificateResponsePrivate(AssociateWirelessGatewayWithCertificateResponse * const q);

    void parseAssociateWirelessGatewayWithCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateWirelessGatewayWithCertificateResponse)
    Q_DISABLE_COPY(AssociateWirelessGatewayWithCertificateResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
