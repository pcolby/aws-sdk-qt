// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSNAPSHOTATTRIBUTERESPONSE_P_H
#define QTAWS_MODIFYDBSNAPSHOTATTRIBUTERESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBSnapshotAttributeResponse;

class ModifyDBSnapshotAttributeResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBSnapshotAttributeResponsePrivate(ModifyDBSnapshotAttributeResponse * const q);

    void parseModifyDBSnapshotAttributeResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBSnapshotAttributeResponse)
    Q_DISABLE_COPY(ModifyDBSnapshotAttributeResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
