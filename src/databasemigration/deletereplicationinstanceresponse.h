// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEREPLICATIONINSTANCERESPONSE_H
#define QTAWS_DELETEREPLICATIONINSTANCERESPONSE_H

#include "databasemigrationresponse.h"
#include "deletereplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteReplicationInstanceResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteReplicationInstanceResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteReplicationInstanceResponse(const DeleteReplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteReplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteReplicationInstanceResponse)
    Q_DISABLE_COPY(DeleteReplicationInstanceResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
