/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
