// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEUSERREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCEUSERREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "deleteappinstanceuserrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceUserRequest;

class DeleteAppInstanceUserRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DeleteAppInstanceUserRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DeleteAppInstanceUserRequest * const q);
    DeleteAppInstanceUserRequestPrivate(const DeleteAppInstanceUserRequestPrivate &other,
                                   DeleteAppInstanceUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceUserRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
