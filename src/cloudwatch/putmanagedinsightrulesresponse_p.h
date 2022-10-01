// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMANAGEDINSIGHTRULESRESPONSE_P_H
#define QTAWS_PUTMANAGEDINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutManagedInsightRulesResponse;

class PutManagedInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutManagedInsightRulesResponsePrivate(PutManagedInsightRulesResponse * const q);

    void parsePutManagedInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutManagedInsightRulesResponse)
    Q_DISABLE_COPY(PutManagedInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
