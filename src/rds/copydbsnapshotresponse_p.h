// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_COPYDBSNAPSHOTRESPONSE_P_H
#define QTAWS_COPYDBSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CopyDBSnapshotResponse;

class CopyDBSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit CopyDBSnapshotResponsePrivate(CopyDBSnapshotResponse * const q);

    void parseCopyDBSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CopyDBSnapshotResponse)
    Q_DISABLE_COPY(CopyDBSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
