// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_P_H
#define QTAWS_DELETEUSERREQUEST_P_H

#include "connectrequest_p.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace Connect {

class DeleteUserRequest;

class DeleteUserRequestPrivate : public ConnectRequestPrivate {

public:
    DeleteUserRequestPrivate(const ConnectRequest::Action action,
                                   DeleteUserRequest * const q);
    DeleteUserRequestPrivate(const DeleteUserRequestPrivate &other,
                                   DeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserRequest)

};

} // namespace Connect
} // namespace QtAws

#endif
