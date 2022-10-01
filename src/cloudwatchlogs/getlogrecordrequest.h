// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETLOGRECORDREQUEST_H
#define QTAWS_GETLOGRECORDREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class GetLogRecordRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT GetLogRecordRequest : public CloudWatchLogsRequest {

public:
    GetLogRecordRequest(const GetLogRecordRequest &other);
    GetLogRecordRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(GetLogRecordRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
