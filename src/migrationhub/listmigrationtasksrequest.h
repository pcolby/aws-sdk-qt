// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMIGRATIONTASKSREQUEST_H
#define QTAWS_LISTMIGRATIONTASKSREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListMigrationTasksRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ListMigrationTasksRequest : public MigrationHubRequest {

public:
    ListMigrationTasksRequest(const ListMigrationTasksRequest &other);
    ListMigrationTasksRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMigrationTasksRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
