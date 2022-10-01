// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTCOMPOSITEALARMREQUEST_P_H
#define QTAWS_PUTCOMPOSITEALARMREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "putcompositealarmrequest.h"

namespace QtAws {
namespace CloudWatch {

class PutCompositeAlarmRequest;

class PutCompositeAlarmRequestPrivate : public CloudWatchRequestPrivate {

public:
    PutCompositeAlarmRequestPrivate(const CloudWatchRequest::Action action,
                                   PutCompositeAlarmRequest * const q);
    PutCompositeAlarmRequestPrivate(const PutCompositeAlarmRequestPrivate &other,
                                   PutCompositeAlarmRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutCompositeAlarmRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
