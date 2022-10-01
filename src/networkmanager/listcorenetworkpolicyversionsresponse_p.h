// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKPOLICYVERSIONSRESPONSE_P_H
#define QTAWS_LISTCORENETWORKPOLICYVERSIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworkPolicyVersionsResponse;

class ListCoreNetworkPolicyVersionsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListCoreNetworkPolicyVersionsResponsePrivate(ListCoreNetworkPolicyVersionsResponse * const q);

    void parseListCoreNetworkPolicyVersionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoreNetworkPolicyVersionsResponse)
    Q_DISABLE_COPY(ListCoreNetworkPolicyVersionsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
