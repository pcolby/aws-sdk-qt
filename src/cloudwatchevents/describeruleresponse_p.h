// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULERESPONSE_P_H
#define QTAWS_DESCRIBERULERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class DescribeRuleResponse;

class DescribeRuleResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit DescribeRuleResponsePrivate(DescribeRuleResponse * const q);

    void parseDescribeRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeRuleResponse)
    Q_DISABLE_COPY(DescribeRuleResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
