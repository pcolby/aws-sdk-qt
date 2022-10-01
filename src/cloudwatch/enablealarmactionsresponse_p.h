// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALARMACTIONSRESPONSE_P_H
#define QTAWS_ENABLEALARMACTIONSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class EnableAlarmActionsResponse;

class EnableAlarmActionsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit EnableAlarmActionsResponsePrivate(EnableAlarmActionsResponse * const q);

    void parseEnableAlarmActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(EnableAlarmActionsResponse)
    Q_DISABLE_COPY(EnableAlarmActionsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
