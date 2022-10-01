// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTLOGEVENTSREQUEST_H
#define QTAWS_PUTLOGEVENTSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutLogEventsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT PutLogEventsRequest : public CloudWatchLogsRequest {

public:
    PutLogEventsRequest(const PutLogEventsRequest &other);
    PutLogEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(PutLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
