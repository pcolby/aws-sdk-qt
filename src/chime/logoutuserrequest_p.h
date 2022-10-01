// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTUSERREQUEST_P_H
#define QTAWS_LOGOUTUSERREQUEST_P_H

#include "chimerequest_p.h"
#include "logoutuserrequest.h"

namespace QtAws {
namespace Chime {

class LogoutUserRequest;

class LogoutUserRequestPrivate : public ChimeRequestPrivate {

public:
    LogoutUserRequestPrivate(const ChimeRequest::Action action,
                                   LogoutUserRequest * const q);
    LogoutUserRequestPrivate(const LogoutUserRequestPrivate &other,
                                   LogoutUserRequest * const q);

private:
    Q_DECLARE_PUBLIC(LogoutUserRequest)

};

} // namespace Chime
} // namespace QtAws

#endif
