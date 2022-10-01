// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEDBSNAPSHOTRESPONSE_P_H
#define QTAWS_DELETEDBSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class DeleteDBSnapshotResponse;

class DeleteDBSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit DeleteDBSnapshotResponsePrivate(DeleteDBSnapshotResponse * const q);

    void parseDeleteDBSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteDBSnapshotResponse)
    Q_DISABLE_COPY(DeleteDBSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
