// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCESRESPONSE_P_H
#define QTAWS_GETNETWORKRESOURCESRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourcesResponse;

class GetNetworkResourcesResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetNetworkResourcesResponsePrivate(GetNetworkResourcesResponse * const q);

    void parseGetNetworkResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourcesResponse)
    Q_DISABLE_COPY(GetNetworkResourcesResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
