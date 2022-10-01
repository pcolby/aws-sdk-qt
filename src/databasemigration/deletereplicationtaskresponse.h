// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONTASKRESPONSE_H
#define QTAWS_DELETEREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "deletereplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteReplicationTaskResponse(const DeleteReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationTaskResponse)
    Q_DISABLE_COPY(DeleteReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
