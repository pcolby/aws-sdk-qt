// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ASSOCIATEROUTINGPROFILEQUEUESRESPONSE_P_H
#define QTAWS_ASSOCIATEROUTINGPROFILEQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class AssociateRoutingProfileQueuesResponse;

class AssociateRoutingProfileQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit AssociateRoutingProfileQueuesResponsePrivate(AssociateRoutingProfileQueuesResponse * const q);

    void parseAssociateRoutingProfileQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(AssociateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(AssociateRoutingProfileQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
