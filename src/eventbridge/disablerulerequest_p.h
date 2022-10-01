// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DISABLERULEREQUEST_P_H
#define QTAWS_DISABLERULEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "disablerulerequest.h"

namespace QtAws {
namespace EventBridge {

class DisableRuleRequest;

class DisableRuleRequestPrivate : public EventBridgeRequestPrivate {

public:
    DisableRuleRequestPrivate(const EventBridgeRequest::Action action,
                                   DisableRuleRequest * const q);
    DisableRuleRequestPrivate(const DisableRuleRequestPrivate &other,
                                   DisableRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DisableRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
