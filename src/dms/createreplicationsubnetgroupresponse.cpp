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

#include "createreplicationsubnetgroupresponse.h"
#include "createreplicationsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DatabaseMigrationService {

/**
 * @class  CreateReplicationSubnetGroupResponse
 *
 * @brief  Handles DatabaseMigrationService CreateReplicationSubnetGroup responses.
 *
 * @see    DatabaseMigrationServiceClient::createReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReplicationSubnetGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new CreateReplicationSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new CreateReplicationSubnetGroupRequest(request));
    setReply(reply);
}

const CreateReplicationSubnetGroupRequest * CreateReplicationSubnetGroupResponse::request() const
{
    Q_D(const CreateReplicationSubnetGroupResponse);
    return static_cast<const CreateReplicationSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService CreateReplicationSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateReplicationSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReplicationSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for CreateReplicationSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReplicationSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReplicationSubnetGroupResponse instance.
 */
CreateReplicationSubnetGroupResponsePrivate::CreateReplicationSubnetGroupResponsePrivate(
    CreateReplicationSubnetGroupQueueResponse * const q) : CreateReplicationSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService CreateReplicationSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReplicationSubnetGroupResponsePrivate::CreateReplicationSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReplicationSubnetGroupResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace AWS
