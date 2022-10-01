// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATECORENETWORKRESPONSE_P_H
#define QTAWS_UPDATECORENETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class UpdateCoreNetworkResponse;

class UpdateCoreNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit UpdateCoreNetworkResponsePrivate(UpdateCoreNetworkResponse * const q);

    void parseUpdateCoreNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateCoreNetworkResponse)
    Q_DISABLE_COPY(UpdateCoreNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
