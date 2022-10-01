// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMHISTORYRESPONSE_P_H
#define QTAWS_DESCRIBEALARMHISTORYRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmHistoryResponse;

class DescribeAlarmHistoryResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DescribeAlarmHistoryResponsePrivate(DescribeAlarmHistoryResponse * const q);

    void parseDescribeAlarmHistoryResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmHistoryResponse)
    Q_DISABLE_COPY(DescribeAlarmHistoryResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
