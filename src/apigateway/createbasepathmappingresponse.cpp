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

#include "createbasepathmappingresponse.h"
#include "createbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateBasePathMappingResponse
 *
 * @brief  Handles APIGateway CreateBasePathMapping responses.
 *
 * @see    APIGatewayClient::createBasePathMapping
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBasePathMappingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateBasePathMappingResponsePrivate(this), parent)
{
    setRequest(new CreateBasePathMappingRequest(request));
    setReply(reply);
}

const CreateBasePathMappingRequest * CreateBasePathMappingResponse::request() const
{
    Q_D(const CreateBasePathMappingResponse);
    return static_cast<const CreateBasePathMappingRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateBasePathMapping response.
 *
 * @param  response  Response to parse.
 */
void CreateBasePathMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateBasePathMappingResponsePrivate
 *
 * @brief  Private implementation for CreateBasePathMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateBasePathMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateBasePathMappingResponse instance.
 */
CreateBasePathMappingResponsePrivate::CreateBasePathMappingResponsePrivate(
    CreateBasePathMappingQueueResponse * const q) : CreateBasePathMappingPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateBasePathMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBasePathMappingResponsePrivate::CreateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBasePathMappingResponse"));
    /// @todo
}
