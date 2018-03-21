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

#include "getvpclinksresponse.h"
#include "getvpclinksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetVpcLinksResponse
 *
 * @brief  Handles APIGateway GetVpcLinks responses.
 *
 * @see    APIGatewayClient::getVpcLinks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVpcLinksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetVpcLinksResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinksRequest(request));
    setReply(reply);
}

const GetVpcLinksRequest * GetVpcLinksResponse::request() const
{
    Q_D(const GetVpcLinksResponse);
    return static_cast<const GetVpcLinksRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetVpcLinks response.
 *
 * @param  response  Response to parse.
 */
void GetVpcLinksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetVpcLinksResponsePrivate
 *
 * @brief  Private implementation for GetVpcLinksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVpcLinksResponse instance.
 */
GetVpcLinksResponsePrivate::GetVpcLinksResponsePrivate(
    GetVpcLinksQueueResponse * const q) : GetVpcLinksPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetVpcLinksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVpcLinksResponsePrivate::GetVpcLinksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinksResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
