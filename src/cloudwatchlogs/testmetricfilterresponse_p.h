// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTMETRICFILTERRESPONSE_P_H
#define QTAWS_TESTMETRICFILTERRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class TestMetricFilterResponse;

class TestMetricFilterResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit TestMetricFilterResponsePrivate(TestMetricFilterResponse * const q);

    void parseTestMetricFilterResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TestMetricFilterResponse)
    Q_DISABLE_COPY(TestMetricFilterResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
