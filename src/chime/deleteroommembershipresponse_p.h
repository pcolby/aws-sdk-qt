// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEROOMMEMBERSHIPRESPONSE_P_H
#define QTAWS_DELETEROOMMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class DeleteRoomMembershipResponse;

class DeleteRoomMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit DeleteRoomMembershipResponsePrivate(DeleteRoomMembershipResponse * const q);

    void parseDeleteRoomMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteRoomMembershipResponse)
    Q_DISABLE_COPY(DeleteRoomMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
