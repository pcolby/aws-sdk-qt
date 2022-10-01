// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMIGRATIONTASKREQUEST_H
#define QTAWS_IMPORTMIGRATIONTASKREQUEST_H

#include "migrationhubrequest.h"

namespace QtAws {
namespace MigrationHub {

class ImportMigrationTaskRequestPrivate;

class QTAWSMIGRATIONHUB_EXPORT ImportMigrationTaskRequest : public MigrationHubRequest {

public:
    ImportMigrationTaskRequest(const ImportMigrationTaskRequest &other);
    ImportMigrationTaskRequest();

    virtual bool isValid() const Q_DECL_OVERRIDE;


protected:
    virtual QtAws::Core::AwsAbstractResponse * response(QNetworkReply * const reply) const Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportMigrationTaskRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
