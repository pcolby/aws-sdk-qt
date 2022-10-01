// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORDATABASESRESPONSE_H
#define QTAWS_DELETEFLEETADVISORDATABASESRESPONSE_H

#include "databasemigrationresponse.h"
#include "deletefleetadvisordatabasesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorDatabasesResponsePrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteFleetAdvisorDatabasesResponse : public DatabaseMigrationResponse {
    Q_OBJECT

public:
    DeleteFleetAdvisorDatabasesResponse(const DeleteFleetAdvisorDatabasesRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const DeleteFleetAdvisorDatabasesRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetAdvisorDatabasesResponse)
    Q_DISABLE_COPY(DeleteFleetAdvisorDatabasesResponse)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
