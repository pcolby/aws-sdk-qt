// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROUTINGPROFILEQUEUESRESPONSE_P_H
#define QTAWS_LISTROUTINGPROFILEQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class ListRoutingProfileQueuesResponse;

class ListRoutingProfileQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit ListRoutingProfileQueuesResponsePrivate(ListRoutingProfileQueuesResponse * const q);

    void parseListRoutingProfileQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(ListRoutingProfileQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
