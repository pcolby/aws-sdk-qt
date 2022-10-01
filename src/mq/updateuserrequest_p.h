// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_P_H
#define QTAWS_UPDATEUSERREQUEST_P_H

#include "mqrequest_p.h"
#include "updateuserrequest.h"

namespace QtAws {
namespace Mq {

class UpdateUserRequest;

class UpdateUserRequestPrivate : public MqRequestPrivate {

public:
    UpdateUserRequestPrivate(const MqRequest::Action action,
                                   UpdateUserRequest * const q);
    UpdateUserRequestPrivate(const UpdateUserRequestPrivate &other,
                                   UpdateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserRequest)

};

} // namespace Mq
} // namespace QtAws

#endif
