// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITERESPONSE_P_H
#define QTAWS_UPDATENETWORKSITERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSiteResponse;

class UpdateNetworkSiteResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit UpdateNetworkSiteResponsePrivate(UpdateNetworkSiteResponse * const q);

    void parseUpdateNetworkSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSiteResponse)
    Q_DISABLE_COPY(UpdateNetworkSiteResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
