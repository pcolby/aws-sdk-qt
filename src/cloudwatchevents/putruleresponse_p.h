// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULERESPONSE_P_H
#define QTAWS_PUTRULERESPONSE_P_H

#include "cloudwatcheventsresponse_p.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutRuleResponse;

class PutRuleResponsePrivate : public CloudWatchEventsResponsePrivate {

public:

    explicit PutRuleResponsePrivate(PutRuleResponse * const q);

    void parsePutRuleResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutRuleResponse)
    Q_DISABLE_COPY(PutRuleResponsePrivate)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
