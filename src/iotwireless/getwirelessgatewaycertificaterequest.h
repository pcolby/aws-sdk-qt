// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYCERTIFICATEREQUEST_H
#define QTAWS_GETWIRELESSGATEWAYCERTIFICATEREQUEST_H

#include "iotwirelessrequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayCertificateRequestPrivate;

class QTAWSIOTWIRELESS_EXPORT GetWirelessGatewayCertificateRequest : public IoTWirelessRequest {

public:
    GetWirelessGatewayCertificateRequest(const GetWirelessGatewayCertificateRequest &other);
    GetWirelessGatewayCertificateRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetWirelessGatewayCertificateRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
