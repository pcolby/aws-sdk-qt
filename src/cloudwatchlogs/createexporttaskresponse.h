// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTTASKRESPONSE_H
#define QTAWS_CREATEEXPORTTASKRESPONSE_H

#include "cloudwatchlogsresponse.h"
#include "createexporttaskrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateExportTaskResponsePrivate;

class QTAWSCLOUDWATCHLOGS_EXPORT CreateExportTaskResponse : public CloudWatchLogsResponse {
    Q_OBJECT

public:
    CreateExportTaskResponse(const CreateExportTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateExportTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateExportTaskResponse)
    Q_DISABLE_COPY(CreateExportTaskResponse)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
