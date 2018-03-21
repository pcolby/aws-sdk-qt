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

#include "associateroletogroupresponse.h"
#include "associateroletogroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  AssociateRoleToGroupResponse
 *
 * @brief  Handles Greengrass AssociateRoleToGroup responses.
 *
 * @see    GreengrassClient::associateRoleToGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateRoleToGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new AssociateRoleToGroupResponsePrivate(this), parent)
{
    setRequest(new AssociateRoleToGroupRequest(request));
    setReply(reply);
}

const AssociateRoleToGroupRequest * AssociateRoleToGroupResponse::request() const
{
    Q_D(const AssociateRoleToGroupResponse);
    return static_cast<const AssociateRoleToGroupRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass AssociateRoleToGroup response.
 *
 * @param  response  Response to parse.
 */
void AssociateRoleToGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateRoleToGroupResponsePrivate
 *
 * @brief  Private implementation for AssociateRoleToGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateRoleToGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateRoleToGroupResponse instance.
 */
AssociateRoleToGroupResponsePrivate::AssociateRoleToGroupResponsePrivate(
    AssociateRoleToGroupQueueResponse * const q) : AssociateRoleToGroupPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass AssociateRoleToGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateRoleToGroupResponsePrivate::AssociateRoleToGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateRoleToGroupResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
