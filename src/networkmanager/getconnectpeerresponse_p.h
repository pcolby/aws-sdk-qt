// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERRESPONSE_P_H
#define QTAWS_GETCONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerResponse;

class GetConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetConnectPeerResponsePrivate(GetConnectPeerResponse * const q);

    void parseGetConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectPeerResponse)
    Q_DISABLE_COPY(GetConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
