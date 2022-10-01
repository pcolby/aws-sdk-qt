// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONPOLICYREQUEST_P_H
#define QTAWS_PUTDESTINATIONPOLICYREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putdestinationpolicyrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationPolicyRequest;

class PutDestinationPolicyRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutDestinationPolicyRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutDestinationPolicyRequest * const q);
    PutDestinationPolicyRequestPrivate(const PutDestinationPolicyRequestPrivate &other,
                                   PutDestinationPolicyRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDestinationPolicyRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
