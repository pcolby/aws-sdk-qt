// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGLOGGROUPRESPONSE_P_H
#define QTAWS_TAGLOGGROUPRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class TagLogGroupResponse;

class TagLogGroupResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit TagLogGroupResponsePrivate(TagLogGroupResponse * const q);

    void parseTagLogGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(TagLogGroupResponse)
    Q_DISABLE_COPY(TagLogGroupResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
