// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETNETWORKROUTESRESPONSE_P_H
#define QTAWS_GETNETWORKROUTESRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetNetworkRoutesResponse;

class GetNetworkRoutesResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetNetworkRoutesResponsePrivate(GetNetworkRoutesResponse * const q);

    void parseGetNetworkRoutesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetNetworkRoutesResponse)
    Q_DISABLE_COPY(GetNetworkRoutesResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
