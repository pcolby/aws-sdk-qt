// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORDATABASESREQUEST_H
#define QTAWS_DELETEFLEETADVISORDATABASESREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorDatabasesRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteFleetAdvisorDatabasesRequest : public DatabaseMigrationRequest {

public:
    DeleteFleetAdvisorDatabasesRequest(const DeleteFleetAdvisorDatabasesRequest &other);
    DeleteFleetAdvisorDatabasesRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetAdvisorDatabasesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
