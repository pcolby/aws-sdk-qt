// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ACTIVATENETWORKSITERESPONSE_P_H
#define QTAWS_ACTIVATENETWORKSITERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class ActivateNetworkSiteResponse;

class ActivateNetworkSiteResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit ActivateNetworkSiteResponsePrivate(ActivateNetworkSiteResponse * const q);

    void parseActivateNetworkSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ActivateNetworkSiteResponse)
    Q_DISABLE_COPY(ActivateNetworkSiteResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
