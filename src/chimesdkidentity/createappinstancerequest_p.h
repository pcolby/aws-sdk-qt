// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEREQUEST_P_H
#define QTAWS_CREATEAPPINSTANCEREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "createappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceRequest;

class CreateAppInstanceRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    CreateAppInstanceRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   CreateAppInstanceRequest * const q);
    CreateAppInstanceRequestPrivate(const CreateAppInstanceRequestPrivate &other,
                                   CreateAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
