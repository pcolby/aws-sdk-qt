// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEAPPINSTANCEADMINREQUEST_P_H
#define QTAWS_CREATEAPPINSTANCEADMINREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "createappinstanceadminrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class CreateAppInstanceAdminRequest;

class CreateAppInstanceAdminRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    CreateAppInstanceAdminRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   CreateAppInstanceAdminRequest * const q);
    CreateAppInstanceAdminRequestPrivate(const CreateAppInstanceAdminRequestPrivate &other,
                                   CreateAppInstanceAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(CreateAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
