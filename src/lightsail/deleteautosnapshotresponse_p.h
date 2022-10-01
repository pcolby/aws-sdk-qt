// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEAUTOSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEAUTOSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteAutoSnapshotResponse;

class DeleteAutoSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteAutoSnapshotResponsePrivate(DeleteAutoSnapshotResponse * const q);

    void parseDeleteAutoSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteAutoSnapshotResponse)
    Q_DISABLE_COPY(DeleteAutoSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
