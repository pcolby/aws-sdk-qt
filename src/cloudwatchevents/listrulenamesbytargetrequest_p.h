// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULENAMESBYTARGETREQUEST_P_H
#define QTAWS_LISTRULENAMESBYTARGETREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "listrulenamesbytargetrequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class ListRuleNamesByTargetRequest;

class ListRuleNamesByTargetRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    ListRuleNamesByTargetRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   ListRuleNamesByTargetRequest * const q);
    ListRuleNamesByTargetRequestPrivate(const ListRuleNamesByTargetRequestPrivate &other,
                                   ListRuleNamesByTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleNamesByTargetRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
