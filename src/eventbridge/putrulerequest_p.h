// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_PUTRULEREQUEST_P_H
#define QTAWS_PUTRULEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "putrulerequest.h"

namespace QtAws {
namespace EventBridge {

class PutRuleRequest;

class PutRuleRequestPrivate : public EventBridgeRequestPrivate {

public:
    PutRuleRequestPrivate(const EventBridgeRequest::Action action,
                                   PutRuleRequest * const q);
    PutRuleRequestPrivate(const PutRuleRequestPrivate &other,
                                   PutRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(PutRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
