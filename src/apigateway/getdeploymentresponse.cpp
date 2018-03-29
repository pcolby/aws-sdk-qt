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

#include "getdeploymentresponse.h"
#include "getdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDeploymentResponse
 *
 * @brief  Handles APIGateway GetDeployment responses.
 *
 * @see    APIGatewayClient::getDeployment
 */

/**
 * @brief  Constructs a new GetDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeploymentResponse::GetDeploymentResponse(
        const GetDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDeploymentResponsePrivate(this), parent)
{
    setRequest(new GetDeploymentRequest(request));
    setReply(reply);
}

const GetDeploymentRequest * GetDeploymentResponse::request() const
{
    Q_D(const GetDeploymentResponse);
    return static_cast<const GetDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDeployment response.
 *
 * @param  response  Response to parse.
 */
void GetDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeploymentResponsePrivate
 *
 * @brief  Private implementation for GetDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeploymentResponse instance.
 */
GetDeploymentResponsePrivate::GetDeploymentResponsePrivate(
    GetDeploymentQueueResponse * const q) : GetDeploymentPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeploymentResponsePrivate::GetDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeploymentResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
