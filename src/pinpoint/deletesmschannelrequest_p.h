// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETESMSCHANNELREQUEST_P_H
#define QTAWS_DELETESMSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deletesmschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteSmsChannelRequest;

class DeleteSmsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteSmsChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteSmsChannelRequest * const q);
    DeleteSmsChannelRequestPrivate(const DeleteSmsChannelRequestPrivate &other,
                                   DeleteSmsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteSmsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
