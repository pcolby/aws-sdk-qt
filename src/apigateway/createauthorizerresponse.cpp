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

#include "createauthorizerresponse.h"
#include "createauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  CreateAuthorizerResponse
 *
 * @brief  Handles APIGateway CreateAuthorizer responses.
 *
 * @see    APIGatewayClient::createAuthorizer
 */

/**
 * @brief  Constructs a new CreateAuthorizerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateAuthorizerResponse::CreateAuthorizerResponse(
        const CreateAuthorizerRequest &request,
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
    Q_D(CreateAuthorizerResponse);
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
    CreateAuthorizerResponse * const q) : APIGatewayResponsePrivate(q)
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
} // namespace QtAws
