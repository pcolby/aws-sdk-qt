// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTRESPONSE_P_H
#define QTAWS_MODIFYDBSNAPSHOTRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotResponse;

class ModifyDBSnapshotResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBSnapshotResponsePrivate(ModifyDBSnapshotResponse * const q);

    void parseModifyDBSnapshotResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBSnapshotResponse)
    Q_DISABLE_COPY(ModifyDBSnapshotResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
