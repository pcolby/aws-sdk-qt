// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSBYRULEREQUEST_P_H
#define QTAWS_LISTTARGETSBYRULEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "listtargetsbyrulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListTargetsByRuleRequest;

class ListTargetsByRuleRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ListTargetsByRuleRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ListTargetsByRuleRequest * const q);
    ListTargetsByRuleRequestPrivate(const ListTargetsByRuleRequestPrivate &other,
                                   ListTargetsByRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetsByRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
