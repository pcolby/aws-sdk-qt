// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEVENTBUSRESPONSE_P_H
#define QTAWS_DELETEEVENTBUSRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeleteEventBusResponse;

class DeleteEventBusResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DeleteEventBusResponsePrivate(DeleteEventBusResponse * const q);

    void parseDeleteEventBusResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteEventBusResponse)
    Q_DISABLE_COPY(DeleteEventBusResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
