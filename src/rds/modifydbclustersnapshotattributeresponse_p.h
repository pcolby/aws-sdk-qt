// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYDBCLUSTERSNAPSHOTATTRIBUTERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBClusterSnapshotAttributeResponse;

class ModifyDBClusterSnapshotAttributeResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBClusterSnapshotAttributeResponsePrivate(ModifyDBClusterSnapshotAttributeResponse * const q);

    void parseModifyDBClusterSnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBClusterSnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifyDBClusterSnapshotAttributeResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
