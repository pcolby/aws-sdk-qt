// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERENDPOINTSREQUEST_P_H
#define QTAWS_GETUSERENDPOINTSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getuserendpointsrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetUserEndpointsRequest;

class GetUserEndpointsRequestPrivate : public PinpointRequestPrivate {

public:
    GetUserEndpointsRequestPrivate(const PinpointRequest::Action action,
                                   GetUserEndpointsRequest * const q);
    GetUserEndpointsRequestPrivate(const GetUserEndpointsRequestPrivate &other,
                                   GetUserEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserEndpointsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
