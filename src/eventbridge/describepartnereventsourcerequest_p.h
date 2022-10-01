// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_P_H
#define QTAWS_DESCRIBEPARTNEREVENTSOURCEREQUEST_P_H

#include "eventbridgerequest_p.h"
#include "describepartnereventsourcerequest.h"

namespace QtAws {
namespace EventBridge {

class DescribePartnerEventSourceRequest;

class DescribePartnerEventSourceRequestPrivate : public EventBridgeRequestPrivate {

public:
    DescribePartnerEventSourceRequestPrivate(const EventBridgeRequest::Action action,
                                   DescribePartnerEventSourceRequest * const q);
    DescribePartnerEventSourceRequestPrivate(const DescribePartnerEventSourceRequestPrivate &other,
                                   DescribePartnerEventSourceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePartnerEventSourceRequest)

};

} // namespace EventBridge
} // namespace QtAws

#endif
