// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETCHANNELSREQUEST_P_H
#define QTAWS_GETCHANNELSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getchannelsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetChannelsRequest;

class GetChannelsRequestPrivate : public PinpointRequestPrivate {

public:
    GetChannelsRequestPrivate(const PinpointRequest::Action action,
                                   GetChannelsRequest * const q);
    GetChannelsRequestPrivate(const GetChannelsRequestPrivate &other,
                                   GetChannelsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetChannelsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
