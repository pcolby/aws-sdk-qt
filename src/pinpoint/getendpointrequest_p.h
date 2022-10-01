// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETENDPOINTREQUEST_P_H
#define QTAWS_GETENDPOINTREQUEST_P_H

#include "pinpointrequest_p.h"
#include "getendpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class GetEndpointRequest;

class GetEndpointRequestPrivate : public PinpointRequestPrivate {

public:
    GetEndpointRequestPrivate(const PinpointRequest::Action action,
                                   GetEndpointRequest * const q);
    GetEndpointRequestPrivate(const GetEndpointRequestPrivate &other,
                                   GetEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetEndpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
