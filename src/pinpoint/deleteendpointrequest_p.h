// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEENDPOINTREQUEST_P_H
#define QTAWS_DELETEENDPOINTREQUEST_P_H

#include "pinpointrequest_p.h"
#include "deleteendpointrequest.h"

namespace QtAws {
namespace Pinpoint {

class DeleteEndpointRequest;

class DeleteEndpointRequestPrivate : public PinpointRequestPrivate {

public:
    DeleteEndpointRequestPrivate(const PinpointRequest::Action action,
                                   DeleteEndpointRequest * const q);
    DeleteEndpointRequestPrivate(const DeleteEndpointRequestPrivate &other,
                                   DeleteEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteEndpointRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
