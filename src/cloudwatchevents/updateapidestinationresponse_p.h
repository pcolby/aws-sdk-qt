// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPIDESTINATIONRESPONSE_P_H
#define QTAWS_UPDATEAPIDESTINATIONRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class UpdateApiDestinationResponse;

class UpdateApiDestinationResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit UpdateApiDestinationResponsePrivate(UpdateApiDestinationResponse * const q);

    void parseUpdateApiDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateApiDestinationResponse)
    Q_DISABLE_COPY(UpdateApiDestinationResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
