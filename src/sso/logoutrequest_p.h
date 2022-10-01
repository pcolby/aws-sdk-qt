// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTREQUEST_P_H
#define QTAWS_LOGOUTREQUEST_P_H

#include "ssorequest_p.h"
#include "logoutrequest.h"

namespace QtAws {
namespace Sso {

class LogoutRequest;

class LogoutRequestPrivate : public SsoRequestPrivate {

public:
    LogoutRequestPrivate(const SsoRequest::Action action,
                                   LogoutRequest * const q);
    LogoutRequestPrivate(const LogoutRequestPrivate &other,
                                   LogoutRequest * const q);

private:
    Q_DECLARE_PUBLIC(LogoutRequest)

};

} // namespace Sso
} // namespace QtAws

#endif
