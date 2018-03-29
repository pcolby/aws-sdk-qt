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

#include "deletedeploymentconfigresponse.h"
#include "deletedeploymentconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CodeDeploy {

/**
 * @class  DeleteDeploymentConfigResponse
 *
 * @brief  Handles CodeDeploy DeleteDeploymentConfig responses.
 *
 * @see    CodeDeployClient::deleteDeploymentConfig
 */

/**
 * @brief  Constructs a new DeleteDeploymentConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeploymentConfigResponse::DeleteDeploymentConfigResponse(
        const DeleteDeploymentConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new DeleteDeploymentConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteDeploymentConfigRequest(request));
    setReply(reply);
}

const DeleteDeploymentConfigRequest * DeleteDeploymentConfigResponse::request() const
{
    Q_D(const DeleteDeploymentConfigResponse);
    return static_cast<const DeleteDeploymentConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy DeleteDeploymentConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeploymentConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeploymentConfigResponsePrivate
 *
 * @brief  Private implementation for DeleteDeploymentConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeploymentConfigResponse instance.
 */
DeleteDeploymentConfigResponsePrivate::DeleteDeploymentConfigResponsePrivate(
    DeleteDeploymentConfigQueueResponse * const q) : DeleteDeploymentConfigPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy DeleteDeploymentConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeploymentConfigResponsePrivate::DeleteDeploymentConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentConfigResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace QtAws
