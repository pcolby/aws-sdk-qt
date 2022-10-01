// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTRESPONSE_P_H
#define QTAWS_LOGOUTRESPONSE_P_H

#include "ssoresponse_p.h"

namespace QtAws {
namespace Sso {

class LogoutResponse;

class LogoutResponsePrivate : public SsoResponsePrivate {

public:

    explicit LogoutResponsePrivate(LogoutResponse * const q);

    void parseLogoutResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LogoutResponse)
    Q_DISABLE_COPY(LogoutResponsePrivate)

};

} // namespace Sso
} // namespace QtAws

#endif
