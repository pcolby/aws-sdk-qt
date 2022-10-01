// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTROOMMEMBERSHIPSRESPONSE_P_H
#define QTAWS_LISTROOMMEMBERSHIPSRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class ListRoomMembershipsResponse;

class ListRoomMembershipsResponsePrivate : public ChimeResponsePrivate {

public:

    explicit ListRoomMembershipsResponsePrivate(ListRoomMembershipsResponse * const q);

    void parseListRoomMembershipsResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListRoomMembershipsResponse)
    Q_DISABLE_COPY(ListRoomMembershipsResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
