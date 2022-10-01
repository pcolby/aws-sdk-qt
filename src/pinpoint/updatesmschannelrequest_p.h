// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATESMSCHANNELREQUEST_P_H
#define QTAWS_UPDATESMSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updatesmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateSmsChannelRequest;

class UpdateSmsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateSmsChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateSmsChannelRequest * const q);
    UpdateSmsChannelRequestPrivate(const UpdateSmsChannelRequestPrivate &other,
                                   UpdateSmsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
