// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSLOGGROUPRESPONSE_P_H
#define QTAWS_LISTTAGSLOGGROUPRESPONSE_P_H

#include "cloudwatchlogsresponse_p.h"

namespace QtAws {
namespace CloudWatchLogs {

class ListTagsLogGroupResponse;

class ListTagsLogGroupResponsePrivate : public CloudWatchLogsResponsePrivate {

public:

    explicit ListTagsLogGroupResponsePrivate(ListTagsLogGroupResponse * const q);

    void parseListTagsLogGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListTagsLogGroupResponse)
    Q_DISABLE_COPY(ListTagsLogGroupResponsePrivate)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
