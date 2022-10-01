// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEMETRICFILTERREQUEST_H
#define QTAWS_DELETEMETRICFILTERREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteMetricFilterRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT DeleteMetricFilterRequest : public CloudWatchLogsRequest {

public:
    DeleteMetricFilterRequest(const DeleteMetricFilterRequest &other);
    DeleteMetricFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
