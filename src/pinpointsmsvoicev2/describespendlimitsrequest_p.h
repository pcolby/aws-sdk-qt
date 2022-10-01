// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESPENDLIMITSREQUEST_P_H
#define QTAWS_DESCRIBESPENDLIMITSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describespendlimitsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSpendLimitsRequest;

class DescribeSpendLimitsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeSpendLimitsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeSpendLimitsRequest * const q);
    DescribeSpendLimitsRequestPrivate(const DescribeSpendLimitsRequestPrivate &other,
                                   DescribeSpendLimitsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSpendLimitsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
