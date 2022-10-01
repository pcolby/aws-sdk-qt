// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REVOKEFLOWENTITLEMENTREQUEST_P_H
#define QTAWS_REVOKEFLOWENTITLEMENTREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "revokeflowentitlementrequest.h"

namespace QtAws {
namespace MediaConnect {

class RevokeFlowEntitlementRequest;

class RevokeFlowEntitlementRequestPrivate : public MediaConnectRequestPrivate {

public:
    RevokeFlowEntitlementRequestPrivate(const MediaConnectRequest::Action action,
                                   RevokeFlowEntitlementRequest * const q);
    RevokeFlowEntitlementRequestPrivate(const RevokeFlowEntitlementRequestPrivate &other,
                                   RevokeFlowEntitlementRequest * const q);

private:
    Q_DECLARE_PUBLIC(RevokeFlowEntitlementRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
