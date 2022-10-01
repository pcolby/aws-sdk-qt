// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYDEFINITIONSRESPONSE_P_H
#define QTAWS_DESCRIBEQUERYDEFINITIONSRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueryDefinitionsResponse;

class DescribeQueryDefinitionsResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DescribeQueryDefinitionsResponsePrivate(DescribeQueryDefinitionsResponse * const q);

    void parseDescribeQueryDefinitionsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DescribeQueryDefinitionsResponse)
    Q_DISABLE_COPY(DescribeQueryDefinitionsResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
