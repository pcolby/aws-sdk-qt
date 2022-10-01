// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_REGISTERAPPINSTANCEUSERENDPOINTREQUEST_P_H
#define QTAWS_REGISTERAPPINSTANCEUSERENDPOINTREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "registerappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class RegisterAppInstanceUserEndpointRequest;

class RegisterAppInstanceUserEndpointRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    RegisterAppInstanceUserEndpointRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   RegisterAppInstanceUserEndpointRequest * const q);
    RegisterAppInstanceUserEndpointRequestPrivate(const RegisterAppInstanceUserEndpointRequestPrivate &other,
                                   RegisterAppInstanceUserEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(RegisterAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
