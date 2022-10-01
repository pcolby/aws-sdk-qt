// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONTASKRESPONSE_H
#define QTAWS_CREATEREPLICATIONTASKRESPONSE_H

#include "databasemigrationresponse.h"
#include "createreplicationtaskrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationTaskResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateReplicationTaskResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    CreateReplicationTaskResponse(const CreateReplicationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationTaskResponse)
    Q_DISABLE_COPY(CreateReplicationTaskResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
