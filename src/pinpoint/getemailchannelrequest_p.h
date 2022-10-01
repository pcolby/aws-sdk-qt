// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETEMAILCHANNELREQUEST_P_H
#define QTAWS_GETEMAILCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEmailChannelRequest;

class GetEmailChannelRequestPrivate : public PinpointRequestPrivate {

public:
    GetEmailChannelRequestPrivate(const PinpointRequest::Action action,
                                   GetEmailChannelRequest * const q);
    GetEmailChannelRequestPrivate(const GetEmailChannelRequestPrivate &other,
                                   GetEmailChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
