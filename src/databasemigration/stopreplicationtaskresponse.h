// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_STOPREPLICATIONTASKRESPONSE_H
#define QTAWS_STOPREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "stopreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class StopReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT StopReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    StopReplicationTaskResponse(const StopReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const StopReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(StopReplicationTaskResponse)
    Q_DISABLE_COPY(StopReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
