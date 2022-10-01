// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGROUPRESPONSE_P_H
#define QTAWS_CREATELOGGROUPRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogGroupResponse;

class CreateLogGroupResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit CreateLogGroupResponsePrivate(CreateLogGroupResponse * const q);

    void parseCreateLogGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateLogGroupResponse)
    Q_DISABLE_COPY(CreateLogGroupResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
