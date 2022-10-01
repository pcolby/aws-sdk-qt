// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEALARMACTIONSRESPONSE_P_H
#define QTAWS_DISABLEALARMACTIONSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DisableAlarmActionsResponse;

class DisableAlarmActionsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DisableAlarmActionsResponsePrivate(DisableAlarmActionsResponse * const q);

    void parseDisableAlarmActionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DisableAlarmActionsResponse)
    Q_DISABLE_COPY(DisableAlarmActionsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
