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

#include "getauthorizerresponse.h"
#include "getauthorizerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetAuthorizerResponse
 *
 * @brief  Handles APIGateway GetAuthorizer responses.
 *
 * @see    APIGatewayClient::getAuthorizer
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAuthorizerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetAuthorizerResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizerRequest(request));
    setReply(reply);
}

const GetAuthorizerRequest * GetAuthorizerResponse::request() const
{
    Q_D(const GetAuthorizerResponse);
    return static_cast<const GetAuthorizerRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetAuthorizer response.
 *
 * @param  response  Response to parse.
 */
void GetAuthorizerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAuthorizerResponsePrivate
 *
 * @brief  Private implementation for GetAuthorizerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAuthorizerResponse instance.
 */
GetAuthorizerResponsePrivate::GetAuthorizerResponsePrivate(
    GetAuthorizerQueueResponse * const q) : GetAuthorizerPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetAuthorizerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAuthorizerResponsePrivate::GetAuthorizerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizerResponse"));
    /// @todo
}
