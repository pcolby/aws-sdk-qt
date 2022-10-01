// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEUSERREQUEST_P_H
#define QTAWS_DELETEUSERREQUEST_P_H

#include "mqrequest_p.h"
#include "deleteuserrequest.h"

namespace QtAws {
namespace Mq {

class DeleteUserRequest;

class DeleteUserRequestPrivate : public MqRequestPrivate {

public:
    DeleteUserRequestPrivate(const MqRequest::Action action,
                                   DeleteUserRequest * const q);
    DeleteUserRequestPrivate(const DeleteUserRequestPrivate &other,
                                   DeleteUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(DeleteUserRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
