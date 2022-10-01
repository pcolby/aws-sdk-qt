// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGLOGGROUPRESPONSE_P_H
#define QTAWS_UNTAGLOGGROUPRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class UntagLogGroupResponse;

class UntagLogGroupResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit UntagLogGroupResponsePrivate(UntagLogGroupResponse * const q);

    void parseUntagLogGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UntagLogGroupResponse)
    Q_DISABLE_COPY(UntagLogGroupResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
