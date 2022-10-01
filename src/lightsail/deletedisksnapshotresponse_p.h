// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDISKSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEDISKSNAPSHOTRESPONSE_P_H

#include "lightsailresponse_p.h"

namespace QtAws {
namespace Lightsail {

class DeleteDiskSnapshotResponse;

class DeleteDiskSnapshotResponsePrivate : public LightsailResponsePrivate {

public:

    explicit DeleteDiskSnapshotResponsePrivate(DeleteDiskSnapshotResponse * const q);

    void parseDeleteDiskSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDiskSnapshotResponse)
    Q_DISABLE_COPY(DeleteDiskSnapshotResponsePrivate)

};

} // namespace Lightsail
} // namespace QtAws

#endif
