// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DESCRIBESENDERIDSREQUEST_P_H
#define QTAWS_DESCRIBESENDERIDSREQUEST_P_H

#include "pinpointsmsvoicev2request_p.h"
#include "describesenderidsrequest.h"

namespace QtAws {
namespace PinpointSmsVoiceV2 {

class DescribeSenderIdsRequest;

class DescribeSenderIdsRequestPrivate : public PinpointSmsVoiceV2RequestPrivate {

public:
    DescribeSenderIdsRequestPrivate(const PinpointSmsVoiceV2Request::Action action,
                                   DescribeSenderIdsRequest * const q);
    DescribeSenderIdsRequestPrivate(const DescribeSenderIdsRequestPrivate &other,
                                   DescribeSenderIdsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DescribeSenderIdsRequest)

};

} // namespace PinpointSmsVoiceV2
} // namespace QtAws

#endif
