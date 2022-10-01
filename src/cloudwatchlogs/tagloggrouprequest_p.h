// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_TAGLOGGROUPREQUEST_P_H
#define QTAWS_TAGLOGGROUPREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "tagloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class TagLogGroupRequest;

class TagLogGroupRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    TagLogGroupRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   TagLogGroupRequest * const q);
    TagLogGroupRequestPrivate(const TagLogGroupRequestPrivate &other,
                                   TagLogGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(TagLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
