// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLEALARMACTIONSREQUEST_P_H
#define QTAWS_DISABLEALARMACTIONSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "disablealarmactionsrequest.h"

namespace QtAws {
namespace CloudWatch {

class DisableAlarmActionsRequest;

class DisableAlarmActionsRequestPrivate : public CloudWatchRequestPrivate {

public:
    DisableAlarmActionsRequestPrivate(const CloudWatchRequest::Action action,
                                   DisableAlarmActionsRequest * const q);
    DisableAlarmActionsRequestPrivate(const DisableAlarmActionsRequestPrivate &other,
                                   DisableAlarmActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableAlarmActionsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
