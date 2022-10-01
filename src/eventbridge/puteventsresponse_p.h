// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTEVENTSRESPONSE_P_H
#define QTAWS_PUTEVENTSRESPONSE_P_H

#include "eventbridgeresponse_p.h"

namespace QtAws {
namespace EventBridge {

class PutEventsResponse;

class PutEventsResponsePrivate : public EventBridgeResponsePrivate {

public:

    explicit PutEventsResponsePrivate(PutEventsResponse * const q);

    void parsePutEventsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutEventsResponse)
    Q_DISABLE_COPY(PutEventsResponsePrivate)

};

} // namespace EventBridge
} // namespace QtAws

#endif
