// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTMETRICFILTERREQUEST_H
#define QTAWS_PUTMETRICFILTERREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutMetricFilterRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutMetricFilterRequest : public CloudWatchLogsRequest {

public:
    PutMetricFilterRequest(const PutMetricFilterRequest &other);
    PutMetricFilterRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutMetricFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
