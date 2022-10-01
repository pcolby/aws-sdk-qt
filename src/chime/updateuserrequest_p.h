// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEUSERREQUEST_P_H
#define QTAWS_UPDATEUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "updateuserrequest.h"

namespace QtAws {
namespace Chime {

class UpdateUserRequest;

class UpdateUserRequestPrivate : public ChimeRequestPrivate {

public:
    UpdateUserRequestPrivate(const ChimeRequest::Action action,
                                   UpdateUserRequest * const q);
    UpdateUserRequestPrivate(const UpdateUserRequestPrivate &other,
                                   UpdateUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(UpdateUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
