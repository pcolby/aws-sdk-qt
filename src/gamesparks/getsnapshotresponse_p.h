// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_GETSNAPSHOTRESPONSE_P_H
#define QTAWS_GETSNAPSHOTRESPONSE_P_H

#include "gamesparksresponse_p.h"

namespace QtAws {
namespace GameSparks {

class GetSnapshotResponse;

class GetSnapshotResponsePrivate : public GameSparksResponsePrivate {

public:

    explicit GetSnapshotResponsePrivate(GetSnapshotResponse * const q);

    void parseGetSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(GetSnapshotResponse)
    Q_DISABLE_COPY(GetSnapshotResponsePrivate)

};

} // namespace GameSparks
} // namespace QtAws

#endif
