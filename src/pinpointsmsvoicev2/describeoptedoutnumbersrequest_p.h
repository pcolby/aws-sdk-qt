// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTEDOUTNUMBERSREQUEST_P_H
#define QTAWS_DESCRIBEOPTEDOUTNUMBERSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describeoptedoutnumbersrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptedOutNumbersRequest;

class DescribeOptedOutNumbersRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeOptedOutNumbersRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeOptedOutNumbersRequest * const q);
    DescribeOptedOutNumbersRequestPrivate(const DescribeOptedOutNumbersRequestPrivate &other,
                                   DescribeOptedOutNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOptedOutNumbersRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
