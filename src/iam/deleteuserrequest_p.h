// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_P_H
#define QTAWS_DELETEUSERREQUEST_P_H

#include "iamrequest_p.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace Iam {

class DeleteUserRequest;

class DeleteUserRequestPrivate : public IamRequestPrivate {

public:
    DeleteUserRequestPrivate(const IamRequest::Action action,
                                   DeleteUserRequest * const q);
    DeleteUserRequestPrivate(const DeleteUserRequestPrivate &other,
                                   DeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserRequest)

};

} // namespace Iam
} // namespace QtAws

#endif
