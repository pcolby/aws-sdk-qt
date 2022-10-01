// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECONNECTPEERRESPONSE_P_H
#define QTAWS_DELETECONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteConnectPeerResponse;

class DeleteConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteConnectPeerResponsePrivate(DeleteConnectPeerResponse * const q);

    void parseDeleteConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteConnectPeerResponse)
    Q_DISABLE_COPY(DeleteConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
