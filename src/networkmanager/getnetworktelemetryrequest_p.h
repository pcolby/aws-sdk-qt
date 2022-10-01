// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKTELEMETRYREQUEST_P_H
#define QTAWS_GETNETWORKTELEMETRYREQUEST_P_H

#include "networkmanagerrequest_p.h"
#include "getnetworktelemetryrequest.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkTelemetryRequest;

class GetNetworkTelemetryRequestPrivate : public NetworkManagerRequestPrivate {

public:
    GetNetworkTelemetryRequestPrivate(const NetworkManagerRequest::Action action,
                                   GetNetworkTelemetryRequest * const q);
    GetNetworkTelemetryRequestPrivate(const GetNetworkTelemetryRequestPrivate &other,
                                   GetNetworkTelemetryRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetNetworkTelemetryRequest)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
