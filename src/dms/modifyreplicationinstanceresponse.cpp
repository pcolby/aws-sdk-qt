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

#include "modifyreplicationinstanceresponse.h"
#include "modifyreplicationinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationInstanceResponse
 *
 * @brief  Handles DatabaseMigrationService ModifyReplicationInstance responses.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationInstance
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationInstanceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ModifyReplicationInstanceResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationInstanceRequest(request));
    setReply(reply);
}

const ModifyReplicationInstanceRequest * ModifyReplicationInstanceResponse::request() const
{
    Q_D(const ModifyReplicationInstanceResponse);
    return static_cast<const ModifyReplicationInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService ModifyReplicationInstance response.
 *
 * @param  response  Response to parse.
 */
void ModifyReplicationInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyReplicationInstanceResponsePrivate
 *
 * @brief  Private implementation for ModifyReplicationInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyReplicationInstanceResponse instance.
 */
ModifyReplicationInstanceResponsePrivate::ModifyReplicationInstanceResponsePrivate(
    ModifyReplicationInstanceQueueResponse * const q) : ModifyReplicationInstancePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService ModifyReplicationInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyReplicationInstanceResponsePrivate::ModifyReplicationInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationInstanceResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
