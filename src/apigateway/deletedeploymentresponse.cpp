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

#include "deletedeploymentresponse.h"
#include "deletedeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  DeleteDeploymentResponse
 *
 * @brief  Handles APIGateway DeleteDeployment responses.
 *
 * @see    APIGatewayClient::deleteDeployment
 */

/**
 * @brief  Constructs a new DeleteDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeploymentResponse::DeleteDeploymentResponse(
        const DeleteDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new DeleteDeploymentResponsePrivate(this), parent)
{
    setRequest(new DeleteDeploymentRequest(request));
    setReply(reply);
}

const DeleteDeploymentRequest * DeleteDeploymentResponse::request() const
{
    Q_D(const DeleteDeploymentResponse);
    return static_cast<const DeleteDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway DeleteDeployment response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeploymentResponsePrivate
 *
 * @brief  Private implementation for DeleteDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeploymentResponse instance.
 */
DeleteDeploymentResponsePrivate::DeleteDeploymentResponsePrivate(
    DeleteDeploymentQueueResponse * const q) : DeleteDeploymentPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway DeleteDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeploymentResponsePrivate::DeleteDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeploymentResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
