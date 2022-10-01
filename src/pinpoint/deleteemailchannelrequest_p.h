// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEEMAILCHANNELREQUEST_P_H
#define QTAWS_DELETEEMAILCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEmailChannelRequest;

class DeleteEmailChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteEmailChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteEmailChannelRequest * const q);
    DeleteEmailChannelRequestPrivate(const DeleteEmailChannelRequestPrivate &other,
                                   DeleteEmailChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
