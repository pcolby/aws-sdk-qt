// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_UPDATEROOMMEMBERSHIPRESPONSE_P_H
#define QTAWS_UPDATEROOMMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class UpdateRoomMembershipResponse;

class UpdateRoomMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit UpdateRoomMembershipResponsePrivate(UpdateRoomMembershipResponse * const q);

    void parseUpdateRoomMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(UpdateRoomMembershipResponse)
    Q_DISABLE_COPY(UpdateRoomMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
