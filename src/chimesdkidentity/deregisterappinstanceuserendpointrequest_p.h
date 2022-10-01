// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTREQUEST_P_H
#define QTAWS_DEREGISTERAPPINSTANCEUSERENDPOINTREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "deregisterappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeregisterAppInstanceUserEndpointRequest;

class DeregisterAppInstanceUserEndpointRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DeregisterAppInstanceUserEndpointRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DeregisterAppInstanceUserEndpointRequest * const q);
    DeregisterAppInstanceUserEndpointRequestPrivate(const DeregisterAppInstanceUserEndpointRequestPrivate &other,
                                   DeregisterAppInstanceUserEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeregisterAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
