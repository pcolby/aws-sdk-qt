// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMIGRATIONTASKRESPONSE_P_H
#define QTAWS_IMPORTMIGRATIONTASKRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ImportMigrationTaskResponse;

class ImportMigrationTaskResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ImportMigrationTaskResponsePrivate(ImportMigrationTaskResponse * const q);

    void parseImportMigrationTaskResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ImportMigrationTaskResponse)
    Q_DISABLE_COPY(ImportMigrationTaskResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
