// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYCERTIFICATEREQUEST_P_H
#define QTAWS_GETWIRELESSGATEWAYCERTIFICATEREQUEST_P_H

#include "iotwirelessrequest_p.h"
#include "getwirelessgatewaycertificaterequest.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayCertificateRequest;

class GetWirelessGatewayCertificateRequestPrivate : public IoTWirelessRequestPrivate {

public:
    GetWirelessGatewayCertificateRequestPrivate(const IoTWirelessRequest::Action action,
                                   GetWirelessGatewayCertificateRequest * const q);
    GetWirelessGatewayCertificateRequestPrivate(const GetWirelessGatewayCertificateRequestPrivate &other,
                                   GetWirelessGatewayCertificateRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayCertificateRequest)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
