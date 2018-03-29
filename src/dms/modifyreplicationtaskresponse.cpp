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

#include "modifyreplicationtaskresponse.h"
#include "modifyreplicationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  ModifyReplicationTaskResponse
 *
 * @brief  Handles DatabaseMigrationService ModifyReplicationTask responses.
 *
 * @see    DatabaseMigrationServiceClient::modifyReplicationTask
 */

/**
 * @brief  Constructs a new ModifyReplicationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ModifyReplicationTaskResponse::ModifyReplicationTaskResponse(
        const ModifyReplicationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new ModifyReplicationTaskResponsePrivate(this), parent)
{
    setRequest(new ModifyReplicationTaskRequest(request));
    setReply(reply);
}

const ModifyReplicationTaskRequest * ModifyReplicationTaskResponse::request() const
{
    Q_D(const ModifyReplicationTaskResponse);
    return static_cast<const ModifyReplicationTaskRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService ModifyReplicationTask response.
 *
 * @param  response  Response to parse.
 */
void ModifyReplicationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(ModifyReplicationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ModifyReplicationTaskResponsePrivate
 *
 * @brief  Private implementation for ModifyReplicationTaskResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ModifyReplicationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ModifyReplicationTaskResponse instance.
 */
ModifyReplicationTaskResponsePrivate::ModifyReplicationTaskResponsePrivate(
    ModifyReplicationTaskResponse * const q) : DatabaseMigrationServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService ModifyReplicationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ModifyReplicationTaskResponsePrivate::parseModifyReplicationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ModifyReplicationTaskResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
