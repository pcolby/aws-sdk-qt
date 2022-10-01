// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESUBSCRIPTIONFILTERREQUEST_P_H
#define QTAWS_DELETESUBSCRIPTIONFILTERREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "deletesubscriptionfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class DeleteSubscriptionFilterRequest;

class DeleteSubscriptionFilterRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    DeleteSubscriptionFilterRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   DeleteSubscriptionFilterRequest * const q);
    DeleteSubscriptionFilterRequestPrivate(const DeleteSubscriptionFilterRequestPrivate &other,
                                   DeleteSubscriptionFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSubscriptionFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
