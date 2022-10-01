// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTPARTNEREVENTSRESPONSE_P_H
#define QTAWS_PUTPARTNEREVENTSRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutPartnerEventsResponse;

class PutPartnerEventsResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit PutPartnerEventsResponsePrivate(PutPartnerEventsResponse * const q);

    void parsePutPartnerEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutPartnerEventsResponse)
    Q_DISABLE_COPY(PutPartnerEventsResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
