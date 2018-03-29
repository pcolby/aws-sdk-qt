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

#include "createdeploymentconfigresponse.h"
#include "createdeploymentconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  CreateDeploymentConfigResponse
 *
 * @brief  Handles CodeDeploy CreateDeploymentConfig responses.
 *
 * @see    CodeDeployClient::createDeploymentConfig
 */

/**
 * @brief  Constructs a new CreateDeploymentConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeploymentConfigResponse::CreateDeploymentConfigResponse(
        const CreateDeploymentConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new CreateDeploymentConfigResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentConfigRequest(request));
    setReply(reply);
}

const CreateDeploymentConfigRequest * CreateDeploymentConfigResponse::request() const
{
    Q_D(const CreateDeploymentConfigResponse);
    return static_cast<const CreateDeploymentConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy CreateDeploymentConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateDeploymentConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeploymentConfigResponsePrivate
 *
 * @brief  Private implementation for CreateDeploymentConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeploymentConfigResponse instance.
 */
CreateDeploymentConfigResponsePrivate::CreateDeploymentConfigResponsePrivate(
    CreateDeploymentConfigQueueResponse * const q) : CreateDeploymentConfigPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy CreateDeploymentConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeploymentConfigResponsePrivate::CreateDeploymentConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentConfigResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
