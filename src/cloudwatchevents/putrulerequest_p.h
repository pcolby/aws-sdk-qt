// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEREQUEST_P_H
#define QTAWS_PUTRULEREQUEST_P_H

#include "cloudwatcheventsrequest_p.h"
#include "putrulerequest.h"

namespace QtAws {
namespace CloudWatchEvents {

class PutRuleRequest;

class PutRuleRequestPrivate : public CloudWatchEventsRequestPrivate {

public:
    PutRuleRequestPrivate(const CloudWatchEventsRequest::Action action,
                                   PutRuleRequest * const q);
    PutRuleRequestPrivate(const PutRuleRequestPrivate &other,
                                   PutRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRuleRequest)

};

} // namespace CloudWatchEvents
} // namespace QtAws

#endif
