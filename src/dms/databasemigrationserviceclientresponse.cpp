/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "databasemigrationserviceclientresponse.h"
#include "databasemigrationserviceclientresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  DatabaseMigrationServiceClientResponse
 *
 * @brief  Handles  DatabaseMigrationServiceClient responses.
 *
 * @see    Client::databaseMigrationServiceClient
 */

/**
 * @brief  Constructs a new DatabaseMigrationServiceClientResponse object.
 *
 * @param  parent   This object's parent.
 */
DatabaseMigrationServiceClientResponse::DatabaseMigrationServiceClientResponse(QObject * const parent)
    : AwsAbstractResponse(new DatabaseMigrationServiceClientResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  DatabaseMigrationServiceClientResponsePrivate
 *
 * @brief  Private implementation for DatabaseMigrationServiceClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DatabaseMigrationServiceClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DatabaseMigrationServiceClientResponse instance.
 */
DatabaseMigrationServiceClientResponsePrivate::DatabaseMigrationServiceClientResponsePrivate(
    DatabaseMigrationServiceClientQueueResponse * const q) : DatabaseMigrationServiceClientPrivate(q)
{

}

} // namespace DatabaseMigrationService
} // namespace AWS
