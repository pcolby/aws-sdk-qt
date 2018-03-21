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

#include "deletedeploymentgroupresponse.h"
#include "deletedeploymentgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  DeleteDeploymentGroupResponse
 *
 * @brief  Handles CodeDeploy DeleteDeploymentGroup responses.
 *
 * @see    CodeDeployClient::deleteDeploymentGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeploymentGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new DeleteDeploymentGroupResponsePrivate(this), parent)
{
    setRequest(new DeleteDeploymentGroupRequest(request));
    setReply(reply);
}

const DeleteDeploymentGroupRequest * DeleteDeploymentGroupResponse::request() const
{
    Q_D(const DeleteDeploymentGroupResponse);
    return static_cast<const DeleteDeploymentGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy DeleteDeploymentGroup response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeploymentGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeploymentGroupResponsePrivate
 *
 * @brief  Private implementation for DeleteDeploymentGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeploymentGroupResponse instance.
 */
DeleteDeploymentGroupResponsePrivate::DeleteDeploymentGroupResponsePrivate(
    DeleteDeploymentGroupQueueResponse * const q) : DeleteDeploymentGroupPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy DeleteDeploymentGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeploymentGroupResponsePrivate::DeleteDeploymentGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentGroupResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
