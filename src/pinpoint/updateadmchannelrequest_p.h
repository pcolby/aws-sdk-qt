// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEADMCHANNELREQUEST_P_H
#define QTAWS_UPDATEADMCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateadmchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateAdmChannelRequest;

class UpdateAdmChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateAdmChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateAdmChannelRequest * const q);
    UpdateAdmChannelRequestPrivate(const UpdateAdmChannelRequestPrivate &other,
                                   UpdateAdmChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAdmChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
