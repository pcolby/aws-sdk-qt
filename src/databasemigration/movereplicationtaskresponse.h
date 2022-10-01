// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_MOVEREPLICATIONTASKRESPONSE_H
#define QTAWS_MOVEREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "movereplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class MoveReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT MoveReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    MoveReplicationTaskResponse(const MoveReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const MoveReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(MoveReplicationTaskResponse)
    Q_DISABLE_COPY(MoveReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
