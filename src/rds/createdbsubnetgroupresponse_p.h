// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEDBSUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATEDBSUBNETGROUPRESPONSE_P_H

#include "rdsresponse_p.h"

namespace QtAws {
namespace Rds {

class CreateDBSubnetGroupResponse;

class CreateDBSubnetGroupResponsePrivate : public RdsResponsePrivate {

public:

    explicit CreateDBSubnetGroupResponsePrivate(CreateDBSubnetGroupResponse * const q);

    void parseCreateDBSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateDBSubnetGroupResponse)
    Q_DISABLE_COPY(CreateDBSubnetGroupResponsePrivate)

};

} // namespace Rds
} // namespace QtAws

#endif
