// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEEMAILCHANNELREQUEST_P_H
#define QTAWS_UPDATEEMAILCHANNELREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateemailchannelrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEmailChannelRequest;

class UpdateEmailChannelRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateEmailChannelRequestPrivate(const PinpointRequest::Action action,
                                   UpdateEmailChannelRequest * const q);
    UpdateEmailChannelRequestPrivate(const UpdateEmailChannelRequestPrivate &other,
                                   UpdateEmailChannelRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEmailChannelRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
