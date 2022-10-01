// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCONNECTPEERASSOCIATIONSRESPONSE_P_H
#define QTAWS_GETCONNECTPEERASSOCIATIONSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetConnectPeerAssociationsResponse;

class GetConnectPeerAssociationsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetConnectPeerAssociationsResponsePrivate(GetConnectPeerAssociationsResponse * const q);

    void parseGetConnectPeerAssociationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetConnectPeerAssociationsResponse)
    Q_DISABLE_COPY(GetConnectPeerAssociationsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
