// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETADMCHANNELREQUEST_P_H
#define QTAWS_GETADMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetAdmChannelRequest;

class GetAdmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetAdmChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetAdmChannelRequest * const q);
    GetAdmChannelRequestPrivate(const GetAdmChannelRequestPrivate &other,
                                   GetAdmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
