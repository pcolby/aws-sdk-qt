// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGSTREAMRESPONSE_P_H
#define QTAWS_DELETELOGSTREAMRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogStreamResponse;

class DeleteLogStreamResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteLogStreamResponsePrivate(DeleteLogStreamResponse * const q);

    void parseDeleteLogStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLogStreamResponse)
    Q_DISABLE_COPY(DeleteLogStreamResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
