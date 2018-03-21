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

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  CreateAuthorizerResponse
 *
 * @brief  Handles APIGateway CreateAuthorizer responses.
 *
 * @see    APIGatewayClient::createAuthorizer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAuthorizerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new CreateAuthorizerResponsePrivate(this), parent)
{
    setRequest(new CreateAuthorizerRequest(request));
    setReply(reply);
}

const CreateAuthorizerRequest * CreateAuthorizerResponse::request() const
{
    Q_D(const CreateAuthorizerResponse);
    return static_cast<const CreateAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway CreateAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void CreateAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateAuthorizerResponsePrivate
 *
 * @brief  Private implementation for CreateAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateAuthorizerResponse instance.
 */
CreateAuthorizerResponsePrivate::CreateAuthorizerResponsePrivate(
    CreateAuthorizerQueueResponse * const q) : CreateAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway CreateAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateAuthorizerResponsePrivate::CreateAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateAuthorizerResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
