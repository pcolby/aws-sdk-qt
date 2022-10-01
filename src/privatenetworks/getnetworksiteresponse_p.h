// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKSITERESPONSE_P_H
#define QTAWS_GETNETWORKSITERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class GetNetworkSiteResponse;

class GetNetworkSiteResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit GetNetworkSiteResponsePrivate(GetNetworkSiteResponse * const q);

    void parseGetNetworkSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkSiteResponse)
    Q_DISABLE_COPY(GetNetworkSiteResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
