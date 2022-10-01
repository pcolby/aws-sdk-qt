// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECONNECTPEERRESPONSE_P_H
#define QTAWS_CREATECONNECTPEERRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateConnectPeerResponse;

class CreateConnectPeerResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateConnectPeerResponsePrivate(CreateConnectPeerResponse * const q);

    void parseCreateConnectPeerResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateConnectPeerResponse)
    Q_DISABLE_COPY(CreateConnectPeerResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
