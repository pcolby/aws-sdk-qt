// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUERESPONSE_P_H
#define QTAWS_UPDATEROUTINGPROFILEDEFAULTOUTBOUNDQUEUERESPONSE_P_H

#include "connectresponse_p.h"

namespace QtAws {
namespace Connect {

class UpdateRoutingProfileDefaultOutboundQueueResponse;

class UpdateRoutingProfileDefaultOutboundQueueResponsePrivate : public ConnectResponsePrivate {

public:

    explicit UpdateRoutingProfileDefaultOutboundQueueResponsePrivate(UpdateRoutingProfileDefaultOutboundQueueResponse * const q);

    void parseUpdateRoutingProfileDefaultOutboundQueueResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoutingProfileDefaultOutboundQueueResponse)
    Q_DISABLE_COPY(UpdateRoutingProfileDefaultOutboundQueueResponsePrivate)

};

} // namespace Connect
} // namespace QtAws

#endif
