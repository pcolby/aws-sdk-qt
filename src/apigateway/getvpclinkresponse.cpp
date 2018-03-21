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

#include "getvpclinkresponse.h"
#include "getvpclinkresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetVpcLinkResponse
 *
 * @brief  Handles APIGateway GetVpcLink responses.
 *
 * @see    APIGatewayClient::getVpcLink
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVpcLinkResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetVpcLinkResponsePrivate(this), parent)
{
    setRequest(new GetVpcLinkRequest(request));
    setReply(reply);
}

const GetVpcLinkRequest * GetVpcLinkResponse::request() const
{
    Q_D(const GetVpcLinkResponse);
    return static_cast<const GetVpcLinkRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetVpcLink response.
 *
 * @param  response  Response to parse.
 */
void GetVpcLinkResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetVpcLinkResponsePrivate
 *
 * @brief  Private implementation for GetVpcLinkResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVpcLinkResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVpcLinkResponse instance.
 */
GetVpcLinkResponsePrivate::GetVpcLinkResponsePrivate(
    GetVpcLinkQueueResponse * const q) : GetVpcLinkPrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetVpcLinkResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVpcLinkResponsePrivate::GetVpcLinkResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVpcLinkResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
