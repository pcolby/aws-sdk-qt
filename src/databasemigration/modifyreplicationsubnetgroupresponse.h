// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONSUBNETGROUPRESPONSE_H
#define QTAWS_MODIFYREPLICATIONSUBNETGROUPRESPONSE_H

#include "databasemigrationresponse.h"
#include "modifyreplicationsubnetgrouprequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationSubnetGroupResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationSubnetGroupResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ModifyReplicationSubnetGroupResponse(const ModifyReplicationSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationSubnetGroupResponse)
    Q_DISABLE_COPY(ModifyReplicationSubnetGroupResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
