// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONSUBNETGROUPRESPONSE_P_H
#define QTAWS_MODIFYREPLICATIONSUBNETGROUPRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationSubnetGroupResponse;

class ModifyReplicationSubnetGroupResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ModifyReplicationSubnetGroupResponsePrivate(ModifyReplicationSubnetGroupResponse * const q);

    void parseModifyReplicationSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ModifyReplicationSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyReplicationSubnetGroupResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
