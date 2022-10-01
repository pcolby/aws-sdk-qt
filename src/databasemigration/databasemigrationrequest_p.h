// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#ifndef QTAWS_DATABASEMIGRATIONREQUEST_P_H
#define QTAWS_DATABASEMIGRATIONREQUEST_P_H

#include "core/awsabstractrequest_p.h"
#include "databasemigrationrequest.h"

namespace QtAws {
namespace DatabaseMigration {

class DatabaseMigrationRequest;

class DatabaseMigrationRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DatabaseMigrationRequest::Action action; ///< DatabaseMigration action to be performed.
    QString apiVersion;        ///< DatabaseMigration API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DatabaseMigration request (query string) parameters. @todo?

    DatabaseMigrationRequestPrivate(const DatabaseMigrationRequest::Action action, DatabaseMigrationRequest * const q);
    DatabaseMigrationRequestPrivate(const DatabaseMigrationRequestPrivate &other, DatabaseMigrationRequest * const q);

    static QString toString(const DatabaseMigrationRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DatabaseMigrationRequest)

};

} // namespace DatabaseMigration
} // namespace QtAws

#endif
