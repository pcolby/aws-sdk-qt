// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTINSIGHTRULERESPONSE_P_H
#define QTAWS_PUTINSIGHTRULERESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutInsightRuleResponse;

class PutInsightRuleResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutInsightRuleResponsePrivate(PutInsightRuleResponse * const q);

    void parsePutInsightRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutInsightRuleResponse)
    Q_DISABLE_COPY(PutInsightRuleResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
