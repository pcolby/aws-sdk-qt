// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTSUBSCRIPTIONFILTERREQUEST_P_H
#define QTAWS_PUTSUBSCRIPTIONFILTERREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putsubscriptionfilterrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutSubscriptionFilterRequest;

class PutSubscriptionFilterRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutSubscriptionFilterRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutSubscriptionFilterRequest * const q);
    PutSubscriptionFilterRequestPrivate(const PutSubscriptionFilterRequestPrivate &other,
                                   PutSubscriptionFilterRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutSubscriptionFilterRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
