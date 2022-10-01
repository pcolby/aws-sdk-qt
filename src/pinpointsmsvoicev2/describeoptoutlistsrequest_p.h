// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEOPTOUTLISTSREQUEST_P_H
#define QTAWS_DESCRIBEOPTOUTLISTSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describeoptoutlistsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeOptOutListsRequest;

class DescribeOptOutListsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeOptOutListsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeOptOutListsRequest * const q);
    DescribeOptOutListsRequestPrivate(const DescribeOptOutListsRequestPrivate &other,
                                   DescribeOptOutListsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeOptOutListsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
