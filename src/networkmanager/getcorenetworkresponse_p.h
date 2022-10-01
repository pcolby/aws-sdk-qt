// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKRESPONSE_P_H
#define QTAWS_GETCORENETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkResponse;

class GetCoreNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetCoreNetworkResponsePrivate(GetCoreNetworkResponse * const q);

    void parseGetCoreNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkResponse)
    Q_DISABLE_COPY(GetCoreNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
