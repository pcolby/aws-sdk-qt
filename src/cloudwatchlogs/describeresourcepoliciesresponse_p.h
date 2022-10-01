// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICIESRESPONSE_P_H
#define QTAWS_DESCRIBERESOURCEPOLICIESRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeResourcePoliciesResponse;

class DescribeResourcePoliciesResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeResourcePoliciesResponsePrivate(DescribeResourcePoliciesResponse * const q);

    void parseDescribeResourcePoliciesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeResourcePoliciesResponse)
    Q_DISABLE_COPY(DescribeResourcePoliciesResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
