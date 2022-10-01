// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULESRESPONSE_P_H
#define QTAWS_LISTRULESRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRulesResponse;

class ListRulesResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit ListRulesResponsePrivate(ListRulesResponse * const q);

    void parseListRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRulesResponse)
    Q_DISABLE_COPY(ListRulesResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
