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

#include "createbasepathmappingresponse.h"
#include "createbasepathmappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateBasePathMappingResponse
 *
 * @brief  Handles APIGateway CreateBasePathMapping responses.
 *
 * @see    APIGatewayClient::createBasePathMapping
 */

/**
 * @brief  Constructs a new CreateBasePathMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateBasePathMappingResponse::CreateBasePathMappingResponse(
        const CreateBasePathMappingRequest &request,
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
    Q_D(CreateBasePathMappingResponse);
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
    CreateBasePathMappingResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateBasePathMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateBasePathMappingResponsePrivate::parseCreateBasePathMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateBasePathMappingResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
