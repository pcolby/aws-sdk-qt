// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEROOMMEMBERSHIPRESPONSE_P_H
#define QTAWS_CREATEROOMMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class CreateRoomMembershipResponse;

class CreateRoomMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit CreateRoomMembershipResponsePrivate(CreateRoomMembershipResponse * const q);

    void parseCreateRoomMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateRoomMembershipResponse)
    Q_DISABLE_COPY(CreateRoomMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
