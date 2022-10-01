// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_SETALARMSTATEREQUEST_P_H
#define QTAWS_SETALARMSTATEREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "setalarmstaterequest.h"

namespace QtAws {
namespace CloudWatch {

class SetAlarmStateRequest;

class SetAlarmStateRequestPrivate : public CloudWatchRequestPrivate {

public:
    SetAlarmStateRequestPrivate(const CloudWatchRequest::Action action,
                                   SetAlarmStateRequest * const q);
    SetAlarmStateRequestPrivate(const SetAlarmStateRequestPrivate &other,
                                   SetAlarmStateRequest * const q);

private:
    Q_DECLARE_PUBLIC(SetAlarmStateRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
