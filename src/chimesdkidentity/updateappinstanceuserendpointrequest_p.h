// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERENDPOINTREQUEST_P_H
#define QTAWS_UPDATEAPPINSTANCEUSERENDPOINTREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "updateappinstanceuserendpointrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserEndpointRequest;

class UpdateAppInstanceUserEndpointRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    UpdateAppInstanceUserEndpointRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   UpdateAppInstanceUserEndpointRequest * const q);
    UpdateAppInstanceUserEndpointRequestPrivate(const UpdateAppInstanceUserEndpointRequestPrivate &other,
                                   UpdateAppInstanceUserEndpointRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceUserEndpointRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
