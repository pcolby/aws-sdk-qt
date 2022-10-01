// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATELOGGROUPREQUEST_P_H
#define QTAWS_CREATELOGGROUPREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "createloggrouprequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class CreateLogGroupRequest;

class CreateLogGroupRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    CreateLogGroupRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   CreateLogGroupRequest * const q);
    CreateLogGroupRequestPrivate(const CreateLogGroupRequestPrivate &other,
                                   CreateLogGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateLogGroupRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
