// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATENETWORKSITEPLANRESPONSE_P_H
#define QTAWS_UPDATENETWORKSITEPLANRESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class UpdateNetworkSitePlanResponse;

class UpdateNetworkSitePlanResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit UpdateNetworkSitePlanResponsePrivate(UpdateNetworkSitePlanResponse * const q);

    void parseUpdateNetworkSitePlanResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateNetworkSitePlanResponse)
    Q_DISABLE_COPY(UpdateNetworkSitePlanResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
