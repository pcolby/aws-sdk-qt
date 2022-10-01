// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCORENETWORKCHANGEEVENTSRESPONSE_P_H
#define QTAWS_GETCORENETWORKCHANGEEVENTSRESPONSE_P_H

#include "networkmanagerresponse_p.h"

namespace QtAws {
namespace NetworkManager {

class GetCoreNetworkChangeEventsResponse;

class GetCoreNetworkChangeEventsResponsePrivate : public NetworkManagerResponsePrivate {

public:

    explicit GetCoreNetworkChangeEventsResponsePrivate(GetCoreNetworkChangeEventsResponse * const q);

    void parseGetCoreNetworkChangeEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetCoreNetworkChangeEventsResponse)
    Q_DISABLE_COPY(GetCoreNetworkChangeEventsResponsePrivate)

};

} // namespace NetworkManager
} // namespace QtAws

#endif
