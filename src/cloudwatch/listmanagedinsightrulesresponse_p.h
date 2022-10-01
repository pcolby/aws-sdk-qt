// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMANAGEDINSIGHTRULESRESPONSE_P_H
#define QTAWS_LISTMANAGEDINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class ListManagedInsightRulesResponse;

class ListManagedInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit ListManagedInsightRulesResponsePrivate(ListManagedInsightRulesResponse * const q);

    void parseListManagedInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListManagedInsightRulesResponse)
    Q_DISABLE_COPY(ListManagedInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
