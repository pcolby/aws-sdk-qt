// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKREQUEST_H
#define QTAWS_CANCELEXPORTTASKREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CancelExportTaskRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CancelExportTaskRequest : public CloudWatchLogsRequest {

public:
    CancelExportTaskRequest(const CancelExportTaskRequest &other);
    CancelExportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CancelExportTaskRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
