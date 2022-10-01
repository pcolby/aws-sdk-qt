// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DELETEFLEETADVISORDATABASESRESPONSE_P_H
#define QTAWS_DELETEFLEETADVISORDATABASESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class DeleteFleetAdvisorDatabasesResponse;

class DeleteFleetAdvisorDatabasesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit DeleteFleetAdvisorDatabasesResponsePrivate(DeleteFleetAdvisorDatabasesResponse * const q);

    void parseDeleteFleetAdvisorDatabasesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(DeleteFleetAdvisorDatabasesResponse)
    Q_DISABLE_COPY(DeleteFleetAdvisorDatabasesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
