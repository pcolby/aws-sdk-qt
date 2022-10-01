// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKTELEMETRYRESPONSE_P_H
#define QTAWS_GETNETWORKTELEMETRYRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkTelemetryResponse;

class GetNetworkTelemetryResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetNetworkTelemetryResponsePrivate(GetNetworkTelemetryResponse * const q);

    void parseGetNetworkTelemetryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkTelemetryResponse)
    Q_DISABLE_COPY(GetNetworkTelemetryResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
