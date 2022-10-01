// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGGROUPSREQUEST_H
#define QTAWS_DESCRIBELOGGROUPSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogGroupsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeLogGroupsRequest : public CloudWatchLogsRequest {

public:
    DescribeLogGroupsRequest(const DescribeLogGroupsRequest &other);
    DescribeLogGroupsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLogGroupsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
