// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMIGRATIONTASKSRESPONSE_H
#define QTAWS_LISTMIGRATIONTASKSRESPONSE_H

#include "migrationhubresponse.h"
#include "listmigrationtasksrequest.h"

namespace QtAws {
namespace MigrationHub {

class ListMigrationTasksResponsePrivate;

class QTAWSMIGRATIONHUB_EXPORT ListMigrationTasksResponse : public MigrationHubResponse {
    Q_OBJECT

public:
    ListMigrationTasksResponse(const ListMigrationTasksRequest &request, QNetworkReply * const reply, QObject * const parent = 0);

    virtual const ListMigrationTasksRequest * request() const Q_DECL_OVERRIDE;

protected slots:
    virtual void parseSuccess(QIODevice &response) Q_DECL_OVERRIDE;

private:
    Q_DECLARE_PRIVATE(ListMigrationTasksResponse)
    Q_DISABLE_COPY(ListMigrationTasksResponse)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
