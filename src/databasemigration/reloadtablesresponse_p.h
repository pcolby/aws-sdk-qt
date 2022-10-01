// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELOADTABLESRESPONSE_P_H
#define QTAWS_RELOADTABLESRESPONSE_P_H

#include "databasemigrationresponse_p.h"

namespace QtAws {
namespace DatabaseMigration {

class ReloadTablesResponse;

class ReloadTablesResponsePrivate : public DatabaseMigrationResponsePrivate {

public:

    explicit ReloadTablesResponsePrivate(ReloadTablesResponse * const q);

    void parseReloadTablesResponse(QXmlStreamReader &xml);

private:
    Q_DECLARE_PUBLIC(ReloadTablesResponse)
    Q_DISABLE_COPY(ReloadTablesResponsePrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
