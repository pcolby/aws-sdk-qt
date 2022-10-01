// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSREQUEST_P_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describedeliverychannelsrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelsRequest;

class DescribeDeliveryChannelsRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeDeliveryChannelsRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeDeliveryChannelsRequest * const q);
    DescribeDeliveryChannelsRequestPrivate(const DescribeDeliveryChannelsRequestPrivate &other,
                                   DescribeDeliveryChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryChannelsRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
