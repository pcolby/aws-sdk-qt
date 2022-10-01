// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYDBSUBNETGROUPRESPONSE_P_H
#define QTAWS_MODIFYDBSUBNETGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class ModifyDBSubnetGroupResponse;

class ModifyDBSubnetGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit ModifyDBSubnetGroupResponsePrivate(ModifyDBSubnetGroupResponse * const q);

    void parseModifyDBSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyDBSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyDBSubnetGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
