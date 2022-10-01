// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBELOGSTREAMSREQUEST_H
#define QTAWS_DESCRIBELOGSTREAMSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeLogStreamsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeLogStreamsRequest : public CloudWatchLogsRequest {

public:
    DescribeLogStreamsRequest(const DescribeLogStreamsRequest &other);
    DescribeLogStreamsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeLogStreamsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
