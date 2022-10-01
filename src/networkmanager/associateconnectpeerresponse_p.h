// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATECONNECTPEERRESPONSE_P_H
#define QTAWS_ASSOCIATECONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class AssociateConnectPeerResponse;

class AssociateConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit AssociateConnectPeerResponsePrivate(AssociateConnectPeerResponse * const q);

    void parseAssociateConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateConnectPeerResponse)
    Q_DISABLE_COPY(AssociateConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
