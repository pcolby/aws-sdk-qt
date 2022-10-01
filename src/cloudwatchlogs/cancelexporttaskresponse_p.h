// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CANCELEXPORTTASKRESPONSE_P_H
#define QTAWS_CANCELEXPORTTASKRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class CancelExportTaskResponse;

class CancelExportTaskResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit CancelExportTaskResponsePrivate(CancelExportTaskResponse * const q);

    void parseCancelExportTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CancelExportTaskResponse)
    Q_DISABLE_COPY(CancelExportTaskResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
