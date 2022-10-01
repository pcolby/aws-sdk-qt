// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GRANTFLOWENTITLEMENTSREQUEST_P_H
#define QTAWS_GRANTFLOWENTITLEMENTSREQUEST_P_H

#include "mediaconnectrequest_p.h"
#include "grantflowentitlementsrequest.h"

namespace QtAws {
namespace MediaConnect {

class GrantFlowEntitlementsRequest;

class GrantFlowEntitlementsRequestPrivate : public MediaConnectRequestPrivate {

public:
    GrantFlowEntitlementsRequestPrivate(const MediaConnectRequest::Action action,
                                   GrantFlowEntitlementsRequest * const q);
    GrantFlowEntitlementsRequestPrivate(const GrantFlowEntitlementsRequestPrivate &other,
                                   GrantFlowEntitlementsRequest * const q);

private:
    Q_DECLARE_PUBLIC(GrantFlowEntitlementsRequest)

};

} // namespace MediaConnect
} // namespace QtAws

#endif
