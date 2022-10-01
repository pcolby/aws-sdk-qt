// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAPPINSTANCEADMINREQUEST_P_H
#define QTAWS_DELETEAPPINSTANCEADMINREQUEST_P_H

#include "chimesdkidentityrequest_p.h"
#include "deleteappinstanceadminrequest.h"

namespace QtAws {
namespace ChimeSdkIdentity {

class DeleteAppInstanceAdminRequest;

class DeleteAppInstanceAdminRequestPrivate : public ChimeSdkIdentityRequestPrivate {

public:
    DeleteAppInstanceAdminRequestPrivate(const ChimeSdkIdentityRequest::Action action,
                                   DeleteAppInstanceAdminRequest * const q);
    DeleteAppInstanceAdminRequestPrivate(const DeleteAppInstanceAdminRequestPrivate &other,
                                   DeleteAppInstanceAdminRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteAppInstanceAdminRequest)

};

} // namespace ChimeSdkIdentity
} // namespace QtAws

#endif
