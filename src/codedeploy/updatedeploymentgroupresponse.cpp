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

#include "updatedeploymentgroupresponse.h"
#include "updatedeploymentgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  UpdateDeploymentGroupResponse
 *
 * @brief  Handles CodeDeploy UpdateDeploymentGroup responses.
 *
 * @see    CodeDeployClient::updateDeploymentGroup
 */

/**
 * @brief  Constructs a new UpdateDeploymentGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeploymentGroupResponse::UpdateDeploymentGroupResponse(
        const UpdateDeploymentGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new UpdateDeploymentGroupResponsePrivate(this), parent)
{
    setRequest(new UpdateDeploymentGroupRequest(request));
    setReply(reply);
}

const UpdateDeploymentGroupRequest * UpdateDeploymentGroupResponse::request() const
{
    Q_D(const UpdateDeploymentGroupResponse);
    return static_cast<const UpdateDeploymentGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy UpdateDeploymentGroup response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeploymentGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDeploymentGroupResponsePrivate
 *
 * @brief  Private implementation for UpdateDeploymentGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeploymentGroupResponse instance.
 */
UpdateDeploymentGroupResponsePrivate::UpdateDeploymentGroupResponsePrivate(
    UpdateDeploymentGroupQueueResponse * const q) : UpdateDeploymentGroupPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy UpdateDeploymentGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeploymentGroupResponsePrivate::UpdateDeploymentGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeploymentGroupResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
