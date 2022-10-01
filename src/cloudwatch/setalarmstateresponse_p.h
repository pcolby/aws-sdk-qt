// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETALARMSTATERESPONSE_P_H
#define QTAWS_SETALARMSTATERESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class SetAlarmStateResponse;

class SetAlarmStateResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit SetAlarmStateResponsePrivate(SetAlarmStateResponse * const q);

    void parseSetAlarmStateResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(SetAlarmStateResponse)
    Q_DISABLE_COPY(SetAlarmStateResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
