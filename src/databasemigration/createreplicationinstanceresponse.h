// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEREPLICATIONINSTANCERESPONSE_H
#define QTAWS_CREATEREPLICATIONINSTANCERESPONSE_H

#include "databasemigrationresponse.h"
#include "createreplicationinstancerequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateReplicationInstanceResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateReplicationInstanceResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    CreateReplicationInstanceResponse(const CreateReplicationInstanceRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const CreateReplicationInstanceRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateReplicationInstanceResponse)
    Q_DISABLE_COPY(CreateReplicationInstanceResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
