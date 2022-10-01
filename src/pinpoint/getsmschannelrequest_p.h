// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSMSCHANNELREQUEST_P_H
#define QTAWS_GETSMSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getsmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetSmsChannelRequest;

class GetSmsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetSmsChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetSmsChannelRequest * const q);
    GetSmsChannelRequestPrivate(const GetSmsChannelRequestPrivate &other,
                                   GetSmsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
