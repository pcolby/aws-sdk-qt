// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLEALARMACTIONSREQUEST_P_H
#define QTAWS_ENABLEALARMACTIONSREQUEST_P_H

#include "cloudwatchrequest_p.h"
#include "enablealarmactionsrequest.h"

namespace QtAws {
namespace CloudWatch {

class EnableAlarmActionsRequest;

class EnableAlarmActionsRequestPrivate : public CloudWatchRequestPrivate {

public:
    EnableAlarmActionsRequestPrivate(const CloudWatchRequest::Action action,
                                   EnableAlarmActionsRequest * const q);
    EnableAlarmActionsRequestPrivate(const EnableAlarmActionsRequestPrivate &other,
                                   EnableAlarmActionsRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableAlarmActionsRequest)

};

} // namespace CloudWatch
} // namespace QtAws

#endif
