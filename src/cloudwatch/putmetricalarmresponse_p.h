// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICALARMRESPONSE_P_H
#define QTAWS_PUTMETRICALARMRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class PutMetricAlarmResponse;

class PutMetricAlarmResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit PutMetricAlarmResponsePrivate(PutMetricAlarmResponse * const q);

    void parsePutMetricAlarmResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(PutMetricAlarmResponse)
    Q_DISABLE_COPY(PutMetricAlarmResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
