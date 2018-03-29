/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef QTAWS_DATABASEMIGRATIONSERVICECLIENTREQUEST_P_H
#define QTAWS_DATABASEMIGRATIONSERVICECLIENTREQUEST_P_H

#include "databasemigrationservice_p.h"
#include "databasemigrationserviceclientrequest.h"

namespace QtAws {
namespace DatabaseMigrationService {

class DatabaseMigrationServiceClientRequest;

class QTAWS_EXPORT DatabaseMigrationServiceClientRequestPrivate : public QtAws::Core::AwsAbstractRequestPrivate {

public:
    DatabaseMigrationServiceClientRequest::Action action; ///< DatabaseMigrationService action to be performed.
    QString apiVersion;        ///< DatabaseMigrationService API version string. @todo Should this be in the abstract base class?
    QVariantMap parameters;    ///< DatabaseMigrationService request (query string) parameters. @todo?

    DatabaseMigrationServiceClientRequestPrivate(const DatabaseMigrationServiceClientRequest::Action action, DatabaseMigrationServiceClientRequest * const q);
    DatabaseMigrationServiceClientRequestPrivate(const DatabaseMigrationServiceClientRequestPrivate &other, DatabaseMigrationServiceClientRequest * const q);

    static QString toString(const DatabaseMigrationServiceClientRequest::Action &action);

private:
    Q_DECLARE_PUBLIC(DatabaseMigrationServiceClientRequest)

};

} // namespace DatabaseMigrationService
} // namespace QtAws

#endif
