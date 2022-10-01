// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONSUBNETGROUPRESPONSE_P_H
#define QTAWS_DELETEREPLICATIONSUBNETGROUPRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationSubnetGroupResponse;

class DeleteReplicationSubnetGroupResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteReplicationSubnetGroupResponsePrivate(DeleteReplicationSubnetGroupResponse * const q);

    void parseDeleteReplicationSubnetGroupResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteReplicationSubnetGroupResponse)
    Q_DISABLE_COPY(DeleteReplicationSubnetGroupResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
