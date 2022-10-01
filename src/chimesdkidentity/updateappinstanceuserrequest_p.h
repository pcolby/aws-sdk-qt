// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_UPDATEAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "updateappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class UpdateAppInstanceUserRequest;

class UpdateAppInstanceUserRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    UpdateAppInstanceUserRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   UpdateAppInstanceUserRequest * const q);
    UpdateAppInstanceUserRequestPrivate(const UpdateAppInstanceUserRequestPrivate &other,
                                   UpdateAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
