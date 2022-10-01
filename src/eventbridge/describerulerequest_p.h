// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBERULEREQUEST_P_H
#define QTAWS_DESCRIBERULEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describerulerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribeRuleRequest;

class DescribeRuleRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribeRuleRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribeRuleRequest * const q);
    DescribeRuleRequestPrivate(const DescribeRuleRequestPrivate &other,
                                   DescribeRuleRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeRuleRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
