// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERENDPOINTSREQUEST_P_H
#define QTAWS_DELETEUSERENDPOINTSREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteuserendpointsrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteUserEndpointsRequest;

class DeleteUserEndpointsRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteUserEndpointsRequestPrivate(const PinpointRequest::Action action,
                                   DeleteUserEndpointsRequest * const q);
    DeleteUserEndpointsRequestPrivate(const DeleteUserEndpointsRequestPrivate &other,
                                   DeleteUserEndpointsRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserEndpointsRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
