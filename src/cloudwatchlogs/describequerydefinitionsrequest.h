// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEQUERYDEFINITIONSREQUEST_H
#define QTAWS_DESCRIBEQUERYDEFINITIONSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DescribeQueryDefinitionsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DescribeQueryDefinitionsRequest : public CloudWatchLogsRequest {

public:
    DescribeQueryDefinitionsRequest(const DescribeQueryDefinitionsRequest &other);
    DescribeQueryDefinitionsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DescribeQueryDefinitionsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
