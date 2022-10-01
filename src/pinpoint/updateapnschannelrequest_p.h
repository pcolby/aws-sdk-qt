// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPNSCHANNELREQUEST_P_H
#define QTAWS_UPDATEAPNSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateApnsChannelRequest;

class UpdateApnsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateApnsChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateApnsChannelRequest * const q);
    UpdateApnsChannelRequestPrivate(const UpdateApnsChannelRequestPrivate &other,
                                   UpdateApnsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateApnsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
