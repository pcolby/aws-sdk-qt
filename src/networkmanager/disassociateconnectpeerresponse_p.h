// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISASSOCIATECONNECTPEERRESPONSE_P_H
#define QTAWS_DISASSOCIATECONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DisassociateConnectPeerResponse;

class DisassociateConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DisassociateConnectPeerResponsePrivate(DisassociateConnectPeerResponse * const q);

    void parseDisassociateConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisassociateConnectPeerResponse)
    Q_DISABLE_COPY(DisassociateConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
