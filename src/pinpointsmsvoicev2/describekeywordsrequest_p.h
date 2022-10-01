// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBEKEYWORDSREQUEST_P_H
#define QTAWS_DESCRIBEKEYWORDSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describekeywordsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeKeywordsRequest;

class DescribeKeywordsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeKeywordsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeKeywordsRequest * const q);
    DescribeKeywordsRequestPrivate(const DescribeKeywordsRequestPrivate &other,
                                   DescribeKeywordsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeKeywordsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
