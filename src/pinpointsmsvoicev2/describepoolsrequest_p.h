// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEPOOLSREQUEST_P_H
#define QTAWS_DESCRIBEPOOLSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describepoolsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribePoolsRequest;

class DescribePoolsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribePoolsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribePoolsRequest * const q);
    DescribePoolsRequestPrivate(const DescribePoolsRequestPrivate &other,
                                   DescribePoolsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribePoolsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
