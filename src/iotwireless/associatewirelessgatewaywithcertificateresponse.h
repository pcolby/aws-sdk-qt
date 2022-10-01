// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATERESPONSE_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATERESPONSE_H

#include "iotwirelessresponse.h"
#include "associatewirelessgatewaywithcertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithCertificateResponsePrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessGatewayWithCertificateResponse : public IoTWirelessResponse {
    Q_OBJECT

public:
    AssociateWirelessGatewayWithCertificateResponse(const AssociateWirelessGatewayWithCertificateRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const AssociateWirelessGatewayWithCertificateRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessGatewayWithCertificateResponse)
    Q_DISABLE_COPY(AssociateWirelessGatewayWithCertificateResponse)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
