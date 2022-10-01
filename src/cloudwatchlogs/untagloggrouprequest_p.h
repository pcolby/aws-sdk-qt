// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UNTAGLOGGROUPREQUEST_P_H
#define QTAWS_UNTAGLOGGROUPREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "untagloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class UntagLogGroupRequest;

class UntagLogGroupRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    UntagLogGroupRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   UntagLogGroupRequest * const q);
    UntagLogGroupRequestPrivate(const UntagLogGroupRequestPrivate &other,
                                   UntagLogGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(UntagLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
