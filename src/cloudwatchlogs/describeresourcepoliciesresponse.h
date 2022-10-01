// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERESOURCEPOLICIESRESPONSE_H
#define QTAWS_DESCRIBERESOURCEPOLICIESRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "describeresourcepoliciesrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeResourcePoliciesResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeResourcePoliciesResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    DescribeResourcePoliciesResponse(const DescribeResourcePoliciesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DescribeResourcePoliciesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeResourcePoliciesResponse)
    Q_DISABLE_COPY(DescribeResourcePoliciesResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
