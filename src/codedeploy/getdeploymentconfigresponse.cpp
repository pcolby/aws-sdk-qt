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

#include "getdeploymentconfigresponse.h"
#include "getdeploymentconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetDeploymentConfigResponse
 *
 * @brief  Handles CodeDeploy GetDeploymentConfig responses.
 *
 * @see    CodeDeployClient::getDeploymentConfig
 */

/**
 * @brief  Constructs a new GetDeploymentConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentConfigResponse::GetDeploymentConfigResponse(
        const GetDeploymentConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetDeploymentConfigResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentConfigRequest(request));
    setReply(reply);
}

const GetDeploymentConfigRequest * GetDeploymentConfigResponse::request() const
{
    Q_D(const GetDeploymentConfigResponse);
    return static_cast<const GetDeploymentConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetDeploymentConfig response.
 *
 * @param  response  Response to parse.
 */
void GetDeploymentConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeploymentConfigResponsePrivate
 *
 * @brief  Private implementation for GetDeploymentConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeploymentConfigResponse instance.
 */
GetDeploymentConfigResponsePrivate::GetDeploymentConfigResponsePrivate(
    GetDeploymentConfigQueueResponse * const q) : GetDeploymentConfigPrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetDeploymentConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeploymentConfigResponsePrivate::GetDeploymentConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentConfigResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
