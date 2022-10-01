// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGSTREAMRESPONSE_P_H
#define QTAWS_CREATELOGSTREAMRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogStreamResponse;

class CreateLogStreamResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit CreateLogStreamResponsePrivate(CreateLogStreamResponse * const q);

    void parseCreateLogStreamResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLogStreamResponse)
    Q_DISABLE_COPY(CreateLogStreamResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
