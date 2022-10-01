// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONSUBNETGROUPRESPONSE_H
#define QTAWS_CREATEREPLICATIONSUBNETGROUPRESPONSE_H

#include "databasemigrationresponse.h"
#include "createreplicationsubnetgrouprequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationSubnetGroupResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateReplicationSubnetGroupResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    CreateReplicationSubnetGroupResponse(const CreateReplicationSubnetGroupRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationSubnetGroupRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationSubnetGroupResponse)
    Q_DISABLE_COPY(CreateReplicationSubnetGroupResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
