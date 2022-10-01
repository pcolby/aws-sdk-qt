// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATEREQUEST_H
#define QTAWS_ASSOCIATEWIRELESSGATEWAYWITHCERTIFICATEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class AssociateWirelessGatewayWithCertificateRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT AssociateWirelessGatewayWithCertificateRequest : public IoTWirelessRequest {

public:
    AssociateWirelessGatewayWithCertificateRequest(const AssociateWirelessGatewayWithCertificateRequest &other);
    AssociateWirelessGatewayWithCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(AssociateWirelessGatewayWithCertificateRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
