// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDESTINATIONSREQUEST_H
#define QTAWS_DESCRIBEDESTINATIONSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeDestinationsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeDestinationsRequest : public CloudWatchLogsRequest {

public:
    DescribeDestinationsRequest(const DescribeDestinationsRequest &other);
    DescribeDestinationsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeDestinationsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
