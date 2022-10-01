// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERIESREQUEST_H
#define QTAWS_DESCRIBEQUERIESREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueriesRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeQueriesRequest : public CloudWatchLogsRequest {

public:
    DescribeQueriesRequest(const DescribeQueriesRequest &other);
    DescribeQueriesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueriesRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
