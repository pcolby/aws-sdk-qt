// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPUBLISHINGDESTINATIONREQUEST_P_H
#define QTAWS_DESCRIBEPUBLISHINGDESTINATIONREQUEST_P_H

#include "guarddutyrequest_p.h"
#include "describepublishingdestinationrequest.h"

namespace QtAws {
namespace GuardDuty {

class DescribePublishingDestinationRequest;

class DescribePublishingDestinationRequestPrivate : public GuardDutyRequestPrivate {

public:
    DescribePublishingDestinationRequestPrivate(const GuardDutyRequest::Action action,
                                   DescribePublishingDestinationRequest * const q);
    DescribePublishingDestinationRequestPrivate(const DescribePublishingDestinationRequestPrivate &other,
                                   DescribePublishingDestinationRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePublishingDestinationRequest)

};

} // namespace GuardDuty
} // namespace QtAws

#endif
