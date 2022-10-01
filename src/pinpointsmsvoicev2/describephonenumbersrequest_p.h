// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPHONENUMBERSREQUEST_P_H
#define QTAWS_DESCRIBEPHONENUMBERSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describephonenumbersrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePhoneNumbersRequest;

class DescribePhoneNumbersRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribePhoneNumbersRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribePhoneNumbersRequest * const q);
    DescribePhoneNumbersRequestPrivate(const DescribePhoneNumbersRequestPrivate &other,
                                   DescribePhoneNumbersRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePhoneNumbersRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
