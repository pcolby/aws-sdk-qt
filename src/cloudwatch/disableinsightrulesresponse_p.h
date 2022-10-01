// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEINSIGHTRULESRESPONSE_P_H
#define QTAWS_DISABLEINSIGHTRULESRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DisableInsightRulesResponse;

class DisableInsightRulesResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DisableInsightRulesResponsePrivate(DisableInsightRulesResponse * const q);

    void parseDisableInsightRulesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableInsightRulesResponse)
    Q_DISABLE_COPY(DisableInsightRulesResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
