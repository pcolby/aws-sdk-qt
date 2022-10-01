// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATENETWORKSITERESPONSE_P_H
#define QTAWS_CREATENETWORKSITERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class CreateNetworkSiteResponse;

class CreateNetworkSiteResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit CreateNetworkSiteResponsePrivate(CreateNetworkSiteResponse * const q);

    void parseCreateNetworkSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateNetworkSiteResponse)
    Q_DISABLE_COPY(CreateNetworkSiteResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
