// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETAPNSCHANNELREQUEST_P_H
#define QTAWS_GETAPNSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetApnsChannelRequest;

class GetApnsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetApnsChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetApnsChannelRequest * const q);
    GetApnsChannelRequestPrivate(const GetApnsChannelRequestPrivate &other,
                                   GetApnsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetApnsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
