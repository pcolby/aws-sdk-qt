// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPNSCHANNELREQUEST_P_H
#define QTAWS_DELETEAPNSCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteapnschannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteApnsChannelRequest;

class DeleteApnsChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteApnsChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteApnsChannelRequest * const q);
    DeleteApnsChannelRequestPrivate(const DeleteApnsChannelRequestPrivate &other,
                                   DeleteApnsChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteApnsChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
