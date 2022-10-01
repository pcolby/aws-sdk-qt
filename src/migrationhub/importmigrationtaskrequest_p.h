// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMIGRATIONTASKREQUEST_P_H
#define QTAWS_IMPORTMIGRATIONTASKREQUEST_P_H

#include "migrationhubrequest_p.h"
#include "importmigrationtaskrequest.h"

namespace QtAws {
namespace MigrationHub {

class ImportMigrationTaskRequest;

class ImportMigrationTaskRequestPrivate : public MigrationHubRequestPrivate {

public:
    ImportMigrationTaskRequestPrivate(const MigrationHubRequest::Action action,
                                   ImportMigrationTaskRequest * const q);
    ImportMigrationTaskRequestPrivate(const ImportMigrationTaskRequestPrivate &other,
                                   ImportMigrationTaskRequest * const q);

private:
    Q_DECLARE_PUBLIC(ImportMigrationTaskRequest)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
