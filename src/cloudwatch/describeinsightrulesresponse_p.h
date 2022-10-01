// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEINSIGHTRULESRESPONSE_P_H
#define QTAWS_DESCRIBEINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DescribeInsightRulesResponse;

class DescribeInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DescribeInsightRulesResponsePrivate(DescribeInsightRulesResponse * const q);

    void parseDescribeInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeInsightRulesResponse)
    Q_DISABLE_COPY(DescribeInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
