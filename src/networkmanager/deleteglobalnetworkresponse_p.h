// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEGLOBALNETWORKRESPONSE_P_H
#define QTAWS_DELETEGLOBALNETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteGlobalNetworkResponse;

class DeleteGlobalNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteGlobalNetworkResponsePrivate(DeleteGlobalNetworkResponse * const q);

    void parseDeleteGlobalNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteGlobalNetworkResponse)
    Q_DISABLE_COPY(DeleteGlobalNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
