// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEADMCHANNELREQUEST_P_H
#define QTAWS_DELETEADMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteAdmChannelRequest;

class DeleteAdmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteAdmChannelRequestPrivate(const PinpointRequest::Action action,
                                   DeleteAdmChannelRequest * const q);
    DeleteAdmChannelRequestPrivate(const DeleteAdmChannelRequestPrivate &other,
                                   DeleteAdmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
