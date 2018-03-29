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

#include "updatedeploymentresponse.h"
#include "updatedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  UpdateDeploymentResponse
 *
 * @brief  Handles APIGateway UpdateDeployment responses.
 *
 * @see    APIGatewayClient::updateDeployment
 */

/**
 * @brief  Constructs a new UpdateDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeploymentResponse::UpdateDeploymentResponse(
        const UpdateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new UpdateDeploymentResponsePrivate(this), parent)
{
    setRequest(new UpdateDeploymentRequest(request));
    setReply(reply);
}

const UpdateDeploymentRequest * UpdateDeploymentResponse::request() const
{
    Q_D(const UpdateDeploymentResponse);
    return static_cast<const UpdateDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway UpdateDeployment response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDeploymentResponsePrivate
 *
 * @brief  Private implementation for UpdateDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeploymentResponse instance.
 */
UpdateDeploymentResponsePrivate::UpdateDeploymentResponsePrivate(
    UpdateDeploymentQueueResponse * const q) : UpdateDeploymentPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway UpdateDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeploymentResponsePrivate::UpdateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeploymentResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
