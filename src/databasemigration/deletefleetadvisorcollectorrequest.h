// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORCOLLECTORREQUEST_H
#define QTAWS_DELETEFLEETADVISORCOLLECTORREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorCollectorRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT DeleteFleetAdvisorCollectorRequest : public DatabaseMigrationRequest {

public:
    DeleteFleetAdvisorCollectorRequest(const DeleteFleetAdvisorCollectorRequest &other);
    DeleteFleetAdvisorCollectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(DeleteFleetAdvisorCollectorRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
