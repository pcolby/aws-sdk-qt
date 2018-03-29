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

#include "getrestapiresponse.h"
#include "getrestapiresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetRestApiResponse
 *
 * @brief  Handles APIGateway GetRestApi responses.
 *
 * @see    APIGatewayClient::getRestApi
 */

/**
 * @brief  Constructs a new GetRestApiResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRestApiResponse::GetRestApiResponse(
        const GetRestApiRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetRestApiResponsePrivate(this), parent)
{
    setRequest(new GetRestApiRequest(request));
    setReply(reply);
}

const GetRestApiRequest * GetRestApiResponse::request() const
{
    Q_D(const GetRestApiResponse);
    return static_cast<const GetRestApiRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetRestApi response.
 *
 * @param  response  Response to parse.
 */
void GetRestApiResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRestApiResponsePrivate
 *
 * @brief  Private implementation for GetRestApiResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRestApiResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRestApiResponse instance.
 */
GetRestApiResponsePrivate::GetRestApiResponsePrivate(
    GetRestApiResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetRestApiResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRestApiResponsePrivate::GetRestApiResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRestApiResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
