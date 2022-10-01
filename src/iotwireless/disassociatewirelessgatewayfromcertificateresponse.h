// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATERESPONSE_H
#define QTAWS_DISASSOCIATEWIRELESSGATEWAYFROMCERTIFICATERESPONSE_H

#include "iotwirelessresponse.h"
#include "disassociatewirelessgatewayfromcertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class DisassociateWirelessGatewayFromCertificateResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT DisassociateWirelessGatewayFromCertificateResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    DisassociateWirelessGatewayFromCertificateResponse(const DisassociateWirelessGatewayFromCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DisassociateWirelessGatewayFromCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DisassociateWirelessGatewayFromCertificateResponse)
    Q_DISABLE_COPY(DisassociateWirelessGatewayFromCertificateResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
