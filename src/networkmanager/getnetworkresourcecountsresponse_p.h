// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCECOUNTSRESPONSE_P_H
#define QTAWS_GETNETWORKRESOURCECOUNTSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkResourceCountsResponse;

class GetNetworkResourceCountsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetNetworkResourceCountsResponsePrivate(GetNetworkResourceCountsResponse * const q);

    void parseGetNetworkResourceCountsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourceCountsResponse)
    Q_DISABLE_COPY(GetNetworkResourceCountsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
