// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABASEMIGRATIONCLIENT_P_H
#define QTAWS_DATABASEMIGRATIONCLIENT_P_H

#include "core/awsabstractclient_p.h"

class QNetworkAccessManager;

namespace QtAws {
namespace DatabaseMigration {

class DatabaseMigrationClient;

class DatabaseMigrationClientPrivate : public QtAws::Core::AwsAbstractClientPrivate {

public:
    explicit DatabaseMigrationClientPrivate(DatabaseMigrationClient * const q);

private:
    Q_DECLARE_PUBLIC(DatabaseMigrationClient)
    Q_DISABLE_COPY(DatabaseMigrationClientPrivate)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
