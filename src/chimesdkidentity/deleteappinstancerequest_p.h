// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCEREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "deleteappinstancerequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceRequest;

class DeleteAppInstanceRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DeleteAppInstanceRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DeleteAppInstanceRequest * const q);
    DeleteAppInstanceRequestPrivate(const DeleteAppInstanceRequestPrivate &other,
                                   DeleteAppInstanceRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
