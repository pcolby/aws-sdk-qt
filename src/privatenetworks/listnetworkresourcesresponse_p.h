// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKRESOURCESRESPONSE_P_H
#define QTAWS_LISTNETWORKRESOURCESRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkResourcesResponse;

class ListNetworkResourcesResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ListNetworkResourcesResponsePrivate(ListNetworkResourcesResponse * const q);

    void parseListNetworkResourcesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworkResourcesResponse)
    Q_DISABLE_COPY(ListNetworkResourcesResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
