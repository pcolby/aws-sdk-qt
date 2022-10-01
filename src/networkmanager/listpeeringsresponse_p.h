// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTPEERINGSRESPONSE_P_H
#define QTAWS_LISTPEERINGSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class ListPeeringsResponse;

class ListPeeringsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit ListPeeringsResponsePrivate(ListPeeringsResponse * const q);

    void parseListPeeringsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListPeeringsResponse)
    Q_DISABLE_COPY(ListPeeringsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
