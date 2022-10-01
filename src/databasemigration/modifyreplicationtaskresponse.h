// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MODIFYREPLICATIONTASKRESPONSE_H
#define QTAWS_MODIFYREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "modifyreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ModifyReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT ModifyReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    ModifyReplicationTaskResponse(const ModifyReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ModifyReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ModifyReplicationTaskResponse)
    Q_DISABLE_COPY(ModifyReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
