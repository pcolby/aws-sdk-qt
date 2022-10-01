// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_P_H
#define QTAWS_MODIFYCLUSTERSUBNETGROUPRESPONSE_P_H

#include "redshiftresponse_p.h"

namespace QtAws {
namespace Redshift {

class ModifyClusterSubnetGroupResponse;

class ModifyClusterSubnetGroupResponsePrivate : public RedshiftResponsePrivate {

public:

    explicit ModifyClusterSubnetGroupResponsePrivate(ModifyClusterSubnetGroupResponse * const q);

    void parseModifyClusterSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyClusterSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyClusterSubnetGroupResponsePrivate)

};

} // namespace Redshift
} // namespace QtAws

#endif
