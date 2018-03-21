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

#include "getdeploymentinstanceresponse.h"
#include "getdeploymentinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeDeploy {

/**
 * @class  GetDeploymentInstanceResponse
 *
 * @brief  Handles CodeDeploy GetDeploymentInstance responses.
 *
 * @see    CodeDeployClient::getDeploymentInstance
 */

/**
 * @brief  Constructs a new GetDeploymentInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentInstanceResponse::GetDeploymentInstanceResponse(
        const GetDeploymentInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeDeployResponse(new GetDeploymentInstanceResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentInstanceRequest(request));
    setReply(reply);
}

const GetDeploymentInstanceRequest * GetDeploymentInstanceResponse::request() const
{
    Q_D(const GetDeploymentInstanceResponse);
    return static_cast<const GetDeploymentInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a CodeDeploy GetDeploymentInstance response.
 *
 * @param  response  Response to parse.
 */
void GetDeploymentInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeploymentInstanceResponsePrivate
 *
 * @brief  Private implementation for GetDeploymentInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeploymentInstanceResponse instance.
 */
GetDeploymentInstanceResponsePrivate::GetDeploymentInstanceResponsePrivate(
    GetDeploymentInstanceQueueResponse * const q) : GetDeploymentInstancePrivate(q)
{

}

/**
 * @brief  Parse an CodeDeploy GetDeploymentInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeploymentInstanceResponsePrivate::GetDeploymentInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentInstanceResponse"));
    /// @todo
}

} // namespace CodeDeploy
} // namespace AWS
