// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEALARMSRESPONSE_P_H
#define QTAWS_DESCRIBEALARMSRESPONSE_P_H

#include "cloudwatchresponse_p.h"

namespace QtAws {
namespace CloudWatch {

class DescribeAlarmsResponse;

class DescribeAlarmsResponsePrivate : public CloudWatchResponsePrivate {

public:

    explicit DescribeAlarmsResponsePrivate(DescribeAlarmsResponse * const q);

    void parseDescribeAlarmsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeAlarmsResponse)
    Q_DISABLE_COPY(DescribeAlarmsResponsePrivate)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
