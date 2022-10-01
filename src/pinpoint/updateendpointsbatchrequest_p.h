// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEENDPOINTSBATCHREQUEST_P_H
#define QTAWS_UPDATEENDPOINTSBATCHREQUEST_P_H

#include "pinpointrequest_p.h"
#include "updateendpointsbatchrequest.h"

namespace QtAws {
namespace Pinpoint {

class UpdateEndpointsBatchRequest;

class UpdateEndpointsBatchRequestPrivate : public PinpointRequestPrivate {

public:
    UpdateEndpointsBatchRequestPrivate(const PinpointRequest::Action action,
                                   UpdateEndpointsBatchRequest * const q);
    UpdateEndpointsBatchRequestPrivate(const UpdateEndpointsBatchRequestPrivate &other,
                                   UpdateEndpointsBatchRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateEndpointsBatchRequest)

};

} // namespace Pinpoint
} // namespace QtAws

#endif
