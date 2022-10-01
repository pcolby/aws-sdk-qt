// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_CREATEFLEETADVISORCOLLECTORREQUEST_H
#define QTAWS_CREATEFLEETADVISORCOLLECTORREQUEST_H

#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class CreateFleetAdvisorCollectorRequestPrivate;

class QTAWSDATABASEMIGRATION_EXPORT CreateFleetAdvisorCollectorRequest : public DatabaseMigrationRequest {

public:
    CreateFleetAdvisorCollectorRequest(const CreateFleetAdvisorCollectorRequest &other);
    CreateFleetAdvisorCollectorRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(CreateFleetAdvisorCollectorRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
