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

#include "deleteendpointconfigresponse.h"
#include "deleteendpointconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMaker {

/**
 * @class  DeleteEndpointConfigResponse
 *
 * @brief  Handles SageMaker DeleteEndpointConfig responses.
 *
 * @see    SageMakerClient::deleteEndpointConfig
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEndpointConfigResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerResponse(new DeleteEndpointConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteEndpointConfigRequest(request));
    setReply(reply);
}

const DeleteEndpointConfigRequest * DeleteEndpointConfigResponse::request() const
{
    Q_D(const DeleteEndpointConfigResponse);
    return static_cast<const DeleteEndpointConfigRequest *>(d->request);
}

/**
 * @brief  Parse a SageMaker DeleteEndpointConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteEndpointConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEndpointConfigResponsePrivate
 *
 * @brief  Private implementation for DeleteEndpointConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEndpointConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEndpointConfigResponse instance.
 */
DeleteEndpointConfigResponsePrivate::DeleteEndpointConfigResponsePrivate(
    DeleteEndpointConfigQueueResponse * const q) : DeleteEndpointConfigPrivate(q)
{

}

/**
 * @brief  Parse an SageMaker DeleteEndpointConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEndpointConfigResponsePrivate::DeleteEndpointConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEndpointConfigResponse"));
    /// @todo
}

} // namespace SageMaker
} // namespace AWS
