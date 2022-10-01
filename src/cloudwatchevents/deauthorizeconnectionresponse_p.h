// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEAUTHORIZECONNECTIONRESPONSE_P_H
#define QTAWS_DEAUTHORIZECONNECTIONRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DeauthorizeConnectionResponse;

class DeauthorizeConnectionResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DeauthorizeConnectionResponsePrivate(DeauthorizeConnectionResponse * const q);

    void parseDeauthorizeConnectionResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeauthorizeConnectionResponse)
    Q_DISABLE_COPY(DeauthorizeConnectionResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
