// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LOGOUTUSERRESPONSE_P_H
#define QTAWS_LOGOUTUSERRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class LogoutUserResponse;

class LogoutUserResponsePrivate : public ChimeResponsePrivate {

public:

    explicit LogoutUserResponsePrivate(LogoutUserResponse * const q);

    void parseLogoutUserResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(LogoutUserResponse)
    Q_DISABLE_COPY(LogoutUserResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
