// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGESETRESPONSE_P_H
#define QTAWS_GETCORENETWORKCHANGESETRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeSetResponse;

class GetCoreNetworkChangeSetResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetCoreNetworkChangeSetResponsePrivate(GetCoreNetworkChangeSetResponse * const q);

    void parseGetCoreNetworkChangeSetResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkChangeSetResponse)
    Q_DISABLE_COPY(GetCoreNetworkChangeSetResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
