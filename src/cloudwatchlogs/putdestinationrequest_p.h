// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTDESTINATIONREQUEST_P_H
#define QTAWS_PUTDESTINATIONREQUEST_P_H

#include "cloudwatchlogsrequest_p.h"
#include "putdestinationrequest.h"

namespace QtAws {
namespace CloudWatchLogs {

class PutDestinationRequest;

class PutDestinationRequestPrivate : public CloudWatchLogsRequestPrivate {

public:
    PutDestinationRequestPrivate(const CloudWatchLogsRequest::Action action,
                                   PutDestinationRequest * const q);
    PutDestinationRequestPrivate(const PutDestinationRequestPrivate &other,
                                   PutDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutDestinationRequest)

};

} // namespace CloudWatchLogs
} // namespace QtAws

#endif
