// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTTARGETSBYRULEREQUEST_P_H
#define QTAWS_LISTTARGETSBYRULEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listtargetsbyrulerequest.h"

namespace QtAws {
namespace EventBridge {

class ListTargetsByRuleRequest;

class ListTargetsByRuleRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListTargetsByRuleRequestPrivate(const EventBridgeRequest::Action action,
                                   ListTargetsByRuleRequest * const q);
    ListTargetsByRuleRequestPrivate(const ListTargetsByRuleRequestPrivate &other,
                                   ListTargetsByRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListTargetsByRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
