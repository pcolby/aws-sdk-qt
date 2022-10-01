// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETINSIGHTRULEREPORTRESPONSE_P_H
#define QTAWS_GETINSIGHTRULEREPORTRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class GetInsightRuleReportResponse;

class GetInsightRuleReportResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit GetInsightRuleReportResponsePrivate(GetInsightRuleReportResponse * const q);

    void parseGetInsightRuleReportResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetInsightRuleReportResponse)
    Q_DISABLE_COPY(GetInsightRuleReportResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
