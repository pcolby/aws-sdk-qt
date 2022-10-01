// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STARTREPLICATIONTASKRESPONSE_H
#define QTAWS_STARTREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "startreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StartReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT StartReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    StartReplicationTaskResponse(const StartReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StartReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StartReplicationTaskResponse)
    Q_DISABLE_COPY(StartReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
