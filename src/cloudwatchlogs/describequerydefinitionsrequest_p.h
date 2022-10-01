// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYDEFINITIONSREQUEST_P_H
#define QTAWS_DESCRIBEQUERYDEFINITIONSREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "describequerydefinitionsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueryDefinitionsRequest;

class DescribeQueryDefinitionsRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DescribeQueryDefinitionsRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DescribeQueryDefinitionsRequest * const q);
    DescribeQueryDefinitionsRequestPrivate(const DescribeQueryDefinitionsRequestPrivate &other,
                                   DescribeQueryDefinitionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeQueryDefinitionsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
