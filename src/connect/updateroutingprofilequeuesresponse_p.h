// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEQUEUESRESPONSE_P_H
#define QTAWS_UPDATEROUTINGPROFILEQUEUESRESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileQueuesResponse;

class UpdateRoutingProfileQueuesResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateRoutingProfileQueuesResponsePrivate(UpdateRoutingProfileQueuesResponse * const q);

    void parseUpdateRoutingProfileQueuesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileQueuesResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileQueuesResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
