// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESUBSCRIPTIONREQUEST_P_H
#define QTAWS_DESCRIBESUBSCRIPTIONREQUEST_P_H

#include "shieldrequest_p.h"
#include "describesubscriptionrequest.h"

namespace QtAws {
namespace Shield {

class DescribeSubscriptionRequest;

class DescribeSubscriptionRequestPrivate : public ShieldRequestPrivate {

public:
    DescribeSubscriptionRequestPrivate(const ShieldRequest::Action action,
                                   DescribeSubscriptionRequest * const q);
    DescribeSubscriptionRequestPrivate(const DescribeSubscriptionRequestPrivate &other,
                                   DescribeSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSubscriptionRequest)

};

} // namespace Shield
} // namespace QtAws

#endif
