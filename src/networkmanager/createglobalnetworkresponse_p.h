// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEGLOBALNETWORKRESPONSE_P_H
#define QTAWS_CREATEGLOBALNETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class CreateGlobalNetworkResponse;

class CreateGlobalNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit CreateGlobalNetworkResponsePrivate(CreateGlobalNetworkResponse * const q);

    void parseCreateGlobalNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateGlobalNetworkResponse)
    Q_DISABLE_COPY(CreateGlobalNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
