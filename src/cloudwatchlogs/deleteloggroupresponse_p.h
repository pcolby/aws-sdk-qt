// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETELOGGROUPRESPONSE_P_H
#define QTAWS_DELETELOGGROUPRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteLogGroupResponse;

class DeleteLogGroupResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit DeleteLogGroupResponsePrivate(DeleteLogGroupResponse * const q);

    void parseDeleteLogGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteLogGroupResponse)
    Q_DISABLE_COPY(DeleteLogGroupResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
