// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTTASKREQUEST_H
#define QTAWS_CREATEEXPORTTASKREQUEST_H

#include "cloudwatchlogsrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateExportTaskRequestPrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateExportTaskRequest : public CloudWatchLogsRequest {

public:
    CreateExportTaskRequest(const CreateExportTaskRequest &other);
    CreateExportTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportTaskRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
