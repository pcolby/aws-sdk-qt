// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETENETWORKSITERESPONSE_P_H
#define QTAWS_DELETENETWORKSITERESPONSE_P_H

#include "privatenetworksresponse_p.h"

namespace QtAws {
namespace PrivateNetworks {

class DeleteNetworkSiteResponse;

class DeleteNetworkSiteResponsePrivate : public PrivateNetworksResponsePrivate {

public:

    explicit DeleteNetworkSiteResponsePrivate(DeleteNetworkSiteResponse * const q);

    void parseDeleteNetworkSiteResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteNetworkSiteResponse)
    Q_DISABLE_COPY(DeleteNetworkSiteResponsePrivate)

};

} // namespace PrivateNetworks
} // namespace QtAws

#endif
