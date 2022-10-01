// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTAGSLOGGROUPREQUEST_P_H
#define QTAWS_LISTTAGSLOGGROUPREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "listtagsloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class ListTagsLogGroupRequest;

class ListTagsLogGroupRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    ListTagsLogGroupRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   ListTagsLogGroupRequest * const q);
    ListTagsLogGroupRequestPrivate(const ListTagsLogGroupRequestPrivate &other,
                                   ListTagsLogGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTagsLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
