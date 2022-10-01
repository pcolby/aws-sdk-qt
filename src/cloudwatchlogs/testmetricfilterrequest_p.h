// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TESTMETRICFILTERREQUEST_P_H
#define QTAWS_TESTMETRICFILTERREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "testmetricfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TestMetricFilterRequest;

class TestMetricFilterRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    TestMetricFilterRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   TestMetricFilterRequest * const q);
    TestMetricFilterRequestPrivate(const TestMetricFilterRequestPrivate &other,
                                   TestMetricFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(TestMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
