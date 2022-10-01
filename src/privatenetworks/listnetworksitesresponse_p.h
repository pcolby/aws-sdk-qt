// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTNETWORKSITESRESPONSE_P_H
#define QTAWS_LISTNETWORKSITESRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ListNetworkSitesResponse;

class ListNetworkSitesResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ListNetworkSitesResponsePrivate(ListNetworkSitesResponse * const q);

    void parseListNetworkSitesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListNetworkSitesResponse)
    Q_DISABLE_COPY(ListNetworkSitesResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
