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

#include "getrestapisresponse.h"
#include "getrestapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetRestApisResponse
 *
 * @brief  Handles APIGateway GetRestApis responses.
 *
 * @see    APIGatewayClient::getRestApis
 */

/**
 * @brief  Constructs a new GetRestApisResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRestApisResponse::GetRestApisResponse(
        const GetRestApisRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRestApisResponsePrivate(this), parent)
{
    setRequest(new GetRestApisRequest(request));
    setReply(reply);
}

const GetRestApisRequest * GetRestApisResponse::request() const
{
    Q_D(const GetRestApisResponse);
    return static_cast<const GetRestApisRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetRestApis response.
 *
 * @param  response  Response to parse.
 */
void GetRestApisResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRestApisResponsePrivate
 *
 * @brief  Private implementation for GetRestApisResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRestApisResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRestApisResponse instance.
 */
GetRestApisResponsePrivate::GetRestApisResponsePrivate(
    GetRestApisQueueResponse * const q) : GetRestApisPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetRestApisResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRestApisResponsePrivate::GetRestApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRestApisResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
