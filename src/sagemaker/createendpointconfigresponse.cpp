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

#include "createendpointconfigresponse.h"
#include "createendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  CreateEndpointConfigResponse
 *
 * @brief  Handles SageMaker CreateEndpointConfig responses.
 *
 * @see    SageMakerClient::createEndpointConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEndpointConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new CreateEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new CreateEndpointConfigRequest(request));
    setReply(reply);
}

const CreateEndpointConfigRequest * CreateEndpointConfigResponse::request() const
{
    Q_D(const CreateEndpointConfigResponse);
    return static_cast<const CreateEndpointConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker CreateEndpointConfig response.
 *
 * @param  response  Response to parse.
 */
void CreateEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEndpointConfigResponsePrivate
 *
 * @brief  Private implementation for CreateEndpointConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEndpointConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEndpointConfigResponse instance.
 */
CreateEndpointConfigResponsePrivate::CreateEndpointConfigResponsePrivate(
    CreateEndpointConfigQueueResponse * const q) : CreateEndpointConfigPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker CreateEndpointConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEndpointConfigResponsePrivate::CreateEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEndpointConfigResponse"));
    /// @todo
}
