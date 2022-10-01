// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTEVENTPATTERNRESPONSE_P_H
#define QTAWS_TESTEVENTPATTERNRESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class TestEventPatternResponse;

class TestEventPatternResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit TestEventPatternResponsePrivate(TestEventPatternResponse * const q);

    void parseTestEventPatternResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestEventPatternResponse)
    Q_DISABLE_COPY(TestEventPatternResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
