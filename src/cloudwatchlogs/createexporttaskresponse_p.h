// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEEXPORTTASKRESPONSE_P_H
#define QTAWS_CREATEEXPORTTASKRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateExportTaskResponse;

class CreateExportTaskResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit CreateExportTaskResponsePrivate(CreateExportTaskResponse * const q);

    void parseCreateExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateExportTaskResponse)
    Q_DISABLE_COPY(CreateExportTaskResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
