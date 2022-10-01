// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEGLOBALNETWORKRESPONSE_P_H
#define QTAWS_UPDATEGLOBALNETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateGlobalNetworkResponse;

class UpdateGlobalNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateGlobalNetworkResponsePrivate(UpdateGlobalNetworkResponse * const q);

    void parseUpdateGlobalNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateGlobalNetworkResponse)
    Q_DISABLE_COPY(UpdateGlobalNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
