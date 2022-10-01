// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEINSIGHTRULESRESPONSE_P_H
#define QTAWS_DELETEINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DeleteInsightRulesResponse;

class DeleteInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DeleteInsightRulesResponsePrivate(DeleteInsightRulesResponse * const q);

    void parseDeleteInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteInsightRulesResponse)
    Q_DISABLE_COPY(DeleteInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
