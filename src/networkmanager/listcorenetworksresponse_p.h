// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTCORENETWORKSRESPONSE_P_H
#define QTAWS_LISTCORENETWORKSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListCoreNetworksResponse;

class ListCoreNetworksResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListCoreNetworksResponsePrivate(ListCoreNetworksResponse * const q);

    void parseListCoreNetworksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListCoreNetworksResponse)
    Q_DISABLE_COPY(ListCoreNetworksResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
