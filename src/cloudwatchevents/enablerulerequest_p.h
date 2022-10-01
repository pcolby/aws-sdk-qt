// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_ENABLERULEREQUEST_P_H
#define QTAWS_ENABLERULEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "enablerulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class EnableRuleRequest;

class EnableRuleRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    EnableRuleRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   EnableRuleRequest * const q);
    EnableRuleRequestPrivate(const EnableRuleRequestPrivate &other,
                                   EnableRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(EnableRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
