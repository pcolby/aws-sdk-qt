// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCONNECTPEERSRESPONSE_P_H
#define QTAWS_LISTCONNECTPEERSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListConnectPeersResponse;

class ListConnectPeersResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListConnectPeersResponsePrivate(ListConnectPeersResponse * const q);

    void parseListConnectPeersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListConnectPeersResponse)
    Q_DISABLE_COPY(ListConnectPeersResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
