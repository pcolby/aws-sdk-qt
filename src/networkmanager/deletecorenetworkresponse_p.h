// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETECORENETWORKRESPONSE_P_H
#define QTAWS_DELETECORENETWORKRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class DeleteCoreNetworkResponse;

class DeleteCoreNetworkResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit DeleteCoreNetworkResponsePrivate(DeleteCoreNetworkResponse * const q);

    void parseDeleteCoreNetworkResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteCoreNetworkResponse)
    Q_DISABLE_COPY(DeleteCoreNetworkResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
