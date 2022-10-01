// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETUSERREQUEST_P_H
#define QTAWS_GETUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "getuserrequest.h"

namespace QtAws {
namespace Chime {

class GetUserRequest;

class GetUserRequestPrivate : public ChimeRequestPrivate {

public:
    GetUserRequestPrivate(const ChimeRequest::Action action,
                                   GetUserRequest * const q);
    GetUserRequestPrivate(const GetUserRequestPrivate &other,
                                   GetUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(GetUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
