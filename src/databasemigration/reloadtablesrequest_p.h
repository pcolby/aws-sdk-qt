// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_RELOADTABLESREQUEST_P_H
#define QTAWS_RELOADTABLESREQUEST_P_H

#include "databasemigrationrequest_p.h"
#include "reloadtablesrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class ReloadTablesRequest;

class ReloadTablesRequestPrivate : public DatabaseMigrationRequestPrivate {

public:
    ReloadTablesRequestPrivate(const DatabaseMigrationRequest::Action action,
                                   ReloadTablesRequest * const q);
    ReloadTablesRequestPrivate(const ReloadTablesRequestPrivate &other,
                                   ReloadTablesRequest * const q);

private:
    Q_DECLARE_PUBLIC(ReloadTablesRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
