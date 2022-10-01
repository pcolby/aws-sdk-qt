// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKRESOURCERESPONSE_P_H
#define QTAWS_GETNETWORKRESOURCERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkResourceResponse;

class GetNetworkResourceResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit GetNetworkResourceResponsePrivate(GetNetworkResourceResponse * const q);

    void parseGetNetworkResourceResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkResourceResponse)
    Q_DISABLE_COPY(GetNetworkResourceResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
