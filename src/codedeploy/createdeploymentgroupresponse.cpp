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

#include "createdeploymentgroupresponse.h"
#include "createdeploymentgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  CreateDeploymentGroupResponse
 *
 * @brief  Handles CodeDeploy CreateDeploymentGroup responses.
 *
 * @see    CodeDeployClient::createDeploymentGroup
 */

/**
 * @brief  Constructs a new CreateDeploymentGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeploymentGroupResponse::CreateDeploymentGroupResponse(
        const CreateDeploymentGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDeploymentGroupResponse(new CreateDeploymentGroupResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentGroupRequest(request));
    setReply(reply);
}

const CreateDeploymentGroupRequest * CreateDeploymentGroupResponse::request() const
{
    Q_D(const CreateDeploymentGroupResponse);
    return static_cast<const CreateDeploymentGroupRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy CreateDeploymentGroup response.
 *
 * @param  response  Response to parse.
 */
void CreateDeploymentGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDeploymentGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeploymentGroupResponsePrivate
 *
 * @brief  Private implementation for CreateDeploymentGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeploymentGroupResponse instance.
 */
CreateDeploymentGroupResponsePrivate::CreateDeploymentGroupResponsePrivate(
    CreateDeploymentGroupResponse * const q) : CodeDeployResponsePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy CreateDeploymentGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeploymentGroupResponsePrivate::parseCreateDeploymentGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentGroupResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
