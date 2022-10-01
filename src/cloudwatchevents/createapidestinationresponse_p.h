// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPIDESTINATIONRESPONSE_P_H
#define QTAWS_CREATEAPIDESTINATIONRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class CreateApiDestinationResponse;

class CreateApiDestinationResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit CreateApiDestinationResponsePrivate(CreateApiDestinationResponse * const q);

    void parseCreateApiDestinationResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateApiDestinationResponse)
    Q_DISABLE_COPY(CreateApiDestinationResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
