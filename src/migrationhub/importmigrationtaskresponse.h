// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_IMPORTMIGRATIONTASKRESPONSE_H
#define QTAWS_IMPORTMIGRATIONTASKRESPONSE_H

#include "migrationhubresponse.h"
#include "importmigrationtaskrequest.h"

namespace QtAws {
namespace MigrationHub {

class ImportMigrationTaskResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ImportMigrationTaskResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ImportMigrationTaskResponse(const ImportMigrationTaskRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ImportMigrationTaskRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ImportMigrationTaskResponse)
    Q_DISABLE_COPY(ImportMigrationTaskResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
