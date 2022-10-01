// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTRULENAMESBYTARGETREQUEST_P_H
#define QTAWS_LISTRULENAMESBYTARGETREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "listrulenamesbytargetrequest.h"

namespace QtAws {
namespace EventBridge {

class ListRuleNamesByTargetRequest;

class ListRuleNamesByTargetRequestPrivate : public EventBridgeRequestPrivate {

public:
    ListRuleNamesByTargetRequestPrivate(const EventBridgeRequest::Action action,
                                   ListRuleNamesByTargetRequest * const q);
    ListRuleNamesByTargetRequestPrivate(const ListRuleNamesByTargetRequestPrivate &other,
                                   ListRuleNamesByTargetRequest * const q);

private:
    Q_DECLARE_PUBLIC(ListRuleNamesByTargetRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
