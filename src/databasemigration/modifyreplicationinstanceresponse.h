// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONINSTANCERESPONSE_H
#define QTAWS_MODIFYREPLICATIONINSTANCERESPONSE_H

#include "databasemigrationresponse.h"
#include "modifyreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationInstanceResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationInstanceResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ModifyReplicationInstanceResponse(const ModifyReplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationInstanceResponse)
    Q_DISABLE_COPY(ModifyReplicationInstanceResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
