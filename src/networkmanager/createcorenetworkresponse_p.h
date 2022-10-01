// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATECORENETWORKRESPONSE_P_H
#define QTAWS_CREATECORENETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateCoreNetworkResponse;

class CreateCoreNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateCoreNetworkResponsePrivate(CreateCoreNetworkResponse * const q);

    void parseCreateCoreNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateCoreNetworkResponse)
    Q_DISABLE_COPY(CreateCoreNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
