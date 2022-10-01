// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_LISTMIGRATIONTASKSRESPONSE_P_H
#define QTAWS_LISTMIGRATIONTASKSRESPONSE_P_H

#include "migrationhubresponse_p.h"

namespace QtAws {
namespace MigrationHub {

class ListMigrationTasksResponse;

class ListMigrationTasksResponsePrivate : public MigrationHubResponsePrivate {

public:

    explicit ListMigrationTasksResponsePrivate(ListMigrationTasksResponse * const q);

    void parseListMigrationTasksResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ListMigrationTasksResponse)
    Q_DISABLE_COPY(ListMigrationTasksResponsePrivate)

};

} // namespace MigrationHub
} // namespace QtAws

#endif
