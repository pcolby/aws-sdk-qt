// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_INVITEUSERSRESPONSE_P_H
#define QTAWS_INVITEUSERSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class InviteUsersResponse;

class InviteUsersResponsePrivate : public ChimeResponsePrivate {

public:

    explicit InviteUsersResponsePrivate(InviteUsersResponse * const q);

    void parseInviteUsersResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(InviteUsersResponse)
    Q_DISABLE_COPY(InviteUsersResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
