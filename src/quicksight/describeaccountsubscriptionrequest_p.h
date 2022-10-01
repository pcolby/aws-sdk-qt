// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONREQUEST_P_H
#define QTAWS_DESCRIBEACCOUNTSUBSCRIPTIONREQUEST_P_H

#include "quicksightrequest_p.h"
#include "describeaccountsubscriptionrequest.h"

namespace QtAws {
namespace QuickSight {

class DescribeAccountSubscriptionRequest;

class DescribeAccountSubscriptionRequestPrivate : public QuickSightRequestPrivate {

public:
    DescribeAccountSubscriptionRequestPrivate(const QuickSightRequest::Action action,
                                   DescribeAccountSubscriptionRequest * const q);
    DescribeAccountSubscriptionRequestPrivate(const DescribeAccountSubscriptionRequestPrivate &other,
                                   DescribeAccountSubscriptionRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeAccountSubscriptionRequest)

};

} // namespace QuickSight
} // namespace QtAws

#endif
