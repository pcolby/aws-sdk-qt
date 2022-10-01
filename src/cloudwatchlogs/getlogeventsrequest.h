// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGEVENTSREQUEST_H
#define QTAWS_GETLOGEVENTSREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogEventsRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogEventsRequest : public CloudWatchLogsRequest {

public:
    GetLogEventsRequest(const GetLogEventsRequest &other);
    GetLogEventsRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogEventsRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
