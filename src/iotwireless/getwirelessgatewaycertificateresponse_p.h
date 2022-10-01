// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETWIRELESSGATEWAYCERTIFICATERESPONSE_P_H
#define QTAWS_GETWIRELESSGATEWAYCERTIFICATERESPONSE_P_H

#include "iotwirelessresponse_p.h"

namespace QtAws {
namespace IoTWireless {

class GetWirelessGatewayCertificateResponse;

class GetWirelessGatewayCertificateResponsePrivate : public IoTWirelessResponsePrivate {

public:

    explicit GetWirelessGatewayCertificateResponsePrivate(GetWirelessGatewayCertificateResponse * const q);

    void parseGetWirelessGatewayCertificateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetWirelessGatewayCertificateResponse)
    Q_DISABLE_COPY(GetWirelessGatewayCertificateResponsePrivate)

};

} // namespace IoTWireless
} // namespace QtAws

#endif
