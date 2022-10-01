// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEBILLINGGROUPREQUEST_P_H
#define QTAWS_DESCRIBEBILLINGGROUPREQUEST_P_H

#include "iotrequest_p.h"
#include "describebillinggrouprequest.h"

namespace QtAws {
namespace IoT {

class DescribeBillingGroupRequest;

class DescribeBillingGroupRequestPrivate : public IoTRequestPrivate {

public:
    DescribeBillingGroupRequestPrivate(const IoTRequest::Action action,
                                   DescribeBillingGroupRequest * const q);
    DescribeBillingGroupRequestPrivate(const DescribeBillingGroupRequestPrivate &other,
                                   DescribeBillingGroupRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeBillingGroupRequest)

};

} // namespace IoT
} // namespace QtAws

#endif
