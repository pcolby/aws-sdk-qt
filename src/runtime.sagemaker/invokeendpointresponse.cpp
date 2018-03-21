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

#include "invokeendpointresponse.h"
#include "invokeendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SageMakerRuntime {

/**
 * @class  InvokeEndpointResponse
 *
 * @brief  Handles SageMakerRuntime InvokeEndpoint responses.
 *
 * @see    SageMakerRuntimeClient::invokeEndpoint
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
InvokeEndpointResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SageMakerRuntimeResponse(new InvokeEndpointResponsePrivate(this), parent)
{
    setRequest(new InvokeEndpointRequest(request));
    setReply(reply);
}

const InvokeEndpointRequest * InvokeEndpointResponse::request() const
{
    Q_D(const InvokeEndpointResponse);
    return static_cast<const InvokeEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a SageMakerRuntime InvokeEndpoint response.
 *
 * @param  response  Response to parse.
 */
void InvokeEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  InvokeEndpointResponsePrivate
 *
 * @brief  Private implementation for InvokeEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new InvokeEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public InvokeEndpointResponse instance.
 */
InvokeEndpointResponsePrivate::InvokeEndpointResponsePrivate(
    InvokeEndpointQueueResponse * const q) : InvokeEndpointPrivate(q)
{

}

/**
 * @brief  Parse an SageMakerRuntime InvokeEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void InvokeEndpointResponsePrivate::InvokeEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("InvokeEndpointResponse"));
    /// @todo
}

} // namespace SageMakerRuntime
} // namespace AWS
