// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDESTINATIONREQUEST_P_H
#define QTAWS_DELETEDESTINATIONREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deletedestinationrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteDestinationRequest;

class DeleteDestinationRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteDestinationRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteDestinationRequest * const q);
    DeleteDestinationRequestPrivate(const DeleteDestinationRequestPrivate &other,
                                   DeleteDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteDestinationRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
