// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTAPIDESTINATIONSRESPONSE_P_H
#define QTAWS_LISTAPIDESTINATIONSRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListApiDestinationsResponse;

class ListApiDestinationsResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListApiDestinationsResponsePrivate(ListApiDestinationsResponse * const q);

    void parseListApiDestinationsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListApiDestinationsResponse)
    Q_DISABLE_COPY(ListApiDestinationsResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
