// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICIESREQUEST_H
#define QTAWS_DESCRIBERESOURCEPOLICIESREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeResourcePoliciesRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeResourcePoliciesRequest : public CloudWatchLogsRequest {

public:
    DescribeResourcePoliciesRequest(const DescribeResourcePoliciesRequest &other);
    DescribeResourcePoliciesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePoliciesRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
