// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_BATCHCREATEROOMMEMBERSHIPRESPONSE_P_H
#define QTAWS_BATCHCREATEROOMMEMBERSHIPRESPONSE_P_H

#include "chimeresponse_p.h"

namespace QtAws {
namespace Chime {

class BatchCreateRoomMembershipResponse;

class BatchCreateRoomMembershipResponsePrivate : public ChimeResponsePrivate {

public:

    explicit BatchCreateRoomMembershipResponsePrivate(BatchCreateRoomMembershipResponse * const q);

    void parseBatchCreateRoomMembershipResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(BatchCreateRoomMembershipResponse)
    Q_DISABLE_COPY(BatchCreateRoomMembershipResponsePrivate)

};

} // namespace Chime
} // namespace QtAws

#endif
