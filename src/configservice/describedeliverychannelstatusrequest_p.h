// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEDELIVERYCHANNELSTATUSREQUEST_P_H
#define QTAWS_DESCRIBEDELIVERYCHANNELSTATUSREQUEST_P_H

#include "configservicerequest_p.h"
#include "describedeliverychannelstatusrequest.h"

namespace QtAws {
namespace ConfigService {

class DescribeDeliveryChannelStatusRequest;

class DescribeDeliveryChannelStatusRequestPrivate : public ConfigServiceRequestPrivate {

public:
    DescribeDeliveryChannelStatusRequestPrivate(const ConfigServiceRequest::Action action,
                                   DescribeDeliveryChannelStatusRequest * const q);
    DescribeDeliveryChannelStatusRequestPrivate(const DescribeDeliveryChannelStatusRequestPrivate &other,
                                   DescribeDeliveryChannelStatusRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeDeliveryChannelStatusRequest)

};

} // namespace ConfigService
} // namespace QtAws

#endif
