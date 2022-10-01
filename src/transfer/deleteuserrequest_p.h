// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_P_H
#define QTAWS_DELETEUSERREQUEST_P_H

#include "transferrequest_p.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace Transfer {

class DeleteUserRequest;

class DeleteUserRequestPrivate : public TransferRequestPrivate {

public:
    DeleteUserRequestPrivate(const TransferRequest::Action action,
                                   DeleteUserRequest * const q);
    DeleteUserRequestPrivate(const DeleteUserRequestPrivate &other,
                                   DeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserRequest)

};

} // namespace Transfer
} // namespace QtAws

#endif
