// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEREQUEST_P_H
#define QTAWS_UPDATEAPPINSTANCEREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "updateappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceRequest;

class UpdateAppInstanceRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    UpdateAppInstanceRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   UpdateAppInstanceRequest * const q);
    UpdateAppInstanceRequestPrivate(const UpdateAppInstanceRequestPrivate &other,
                                   UpdateAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
