// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPQUERYREQUEST_H
#define QTAWS_STOPQUERYREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class StopQueryRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT StopQueryRequest : public CloudWatchLogsRequest {

public:
    StopQueryRequest(const StopQueryRequest &other);
    StopQueryRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopQueryRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
