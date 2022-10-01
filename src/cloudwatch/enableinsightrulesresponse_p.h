// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEINSIGHTRULESRESPONSE_P_H
#define QTAWS_ENABLEINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class EnableInsightRulesResponse;

class EnableInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit EnableInsightRulesResponsePrivate(EnableInsightRulesResponse * const q);

    void parseEnableInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableInsightRulesResponse)
    Q_DISABLE_COPY(EnableInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
