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

#include "deletereplicationsubnetgroupresponse.h"
#include "deletereplicationsubnetgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DeleteReplicationSubnetGroupResponse
 *
 * @brief  Handles DatabaseMigrationService DeleteReplicationSubnetGroup responses.
 *
 * @see    DatabaseMigrationServiceClient::deleteReplicationSubnetGroup
 */

/**
 * @brief  Constructs a new DeleteReplicationSubnetGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReplicationSubnetGroupResponse::DeleteReplicationSubnetGroupResponse(
        const DeleteReplicationSubnetGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DeleteReplicationSubnetGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteReplicationSubnetGroupRequest(request));
    setReply(reply);
}

const DeleteReplicationSubnetGroupRequest * DeleteReplicationSubnetGroupResponse::request() const
{
    Q_D(const DeleteReplicationSubnetGroupResponse);
    return static_cast<const DeleteReplicationSubnetGroupRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DeleteReplicationSubnetGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteReplicationSubnetGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReplicationSubnetGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteReplicationSubnetGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReplicationSubnetGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReplicationSubnetGroupResponse instance.
 */
DeleteReplicationSubnetGroupResponsePrivate::DeleteReplicationSubnetGroupResponsePrivate(
    DeleteReplicationSubnetGroupQueueResponse * const q) : DeleteReplicationSubnetGroupPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DeleteReplicationSubnetGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReplicationSubnetGroupResponsePrivate::DeleteReplicationSubnetGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReplicationSubnetGroupResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
