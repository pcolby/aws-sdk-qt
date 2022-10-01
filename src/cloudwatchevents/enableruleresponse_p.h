// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERULERESPONSE_P_H
#define QTAWS_ENABLERULERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class EnableRuleResponse;

class EnableRuleResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit EnableRuleResponsePrivate(EnableRuleResponse * const q);

    void parseEnableRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableRuleResponse)
    Q_DISABLE_COPY(EnableRuleResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
