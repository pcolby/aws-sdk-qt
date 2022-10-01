// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTREPLAYSRESPONSE_P_H
#define QTAWS_LISTREPLAYSRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListReplaysResponse;

class ListReplaysResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListReplaysResponsePrivate(ListReplaysResponse * const q);

    void parseListReplaysResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListReplaysResponse)
    Q_DISABLE_COPY(ListReplaysResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
