// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEFLOWENTITLEMENTREQUEST_P_H
#define QTAWS_UPDATEFLOWENTITLEMENTREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "updateflowentitlementrequest.h"

namespace QtAws {
namespace MediaConnect {

class UpdateFlowEntitlementRequest;

class UpdateFlowEntitlementRequestPrivate : public MediaConnectRequestPrivate {

public:
    UpdateFlowEntitlementRequestPrivate(const MediaConnectRequest::Action action,
                                   UpdateFlowEntitlementRequest * const q);
    UpdateFlowEntitlementRequestPrivate(const UpdateFlowEntitlementRequestPrivate &other,
                                   UpdateFlowEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateFlowEntitlementRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
