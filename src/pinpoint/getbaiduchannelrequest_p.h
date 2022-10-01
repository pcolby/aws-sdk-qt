// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETBAIDUCHANNELREQUEST_P_H
#define QTAWS_GETBAIDUCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getbaiduchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetBaiduChannelRequest;

class GetBaiduChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetBaiduChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetBaiduChannelRequest * const q);
    GetBaiduChannelRequestPrivate(const GetBaiduChannelRequestPrivate &other,
                                   GetBaiduChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetBaiduChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
