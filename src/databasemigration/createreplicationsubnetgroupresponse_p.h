// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSUBNETGROUPRESPONSE_P_H
#define QTAWS_CREATEREPLICATIONSUBNETGROUPRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationSubnetGroupResponse;

class CreateReplicationSubnetGroupResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit CreateReplicationSubnetGroupResponsePrivate(CreateReplicationSubnetGroupResponse * const q);

    void parseCreateReplicationSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(CreateReplicationSubnetGroupResponse)
    Q_DISABLE_COPY(CreateReplicationSubnetGroupResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
