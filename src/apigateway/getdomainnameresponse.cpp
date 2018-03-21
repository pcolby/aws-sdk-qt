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

#include "getdomainnameresponse.h"
#include "getdomainnameresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace APIGateway {

/**
 * @class  GetDomainNameResponse
 *
 * @brief  Handles APIGateway GetDomainName responses.
 *
 * @see    APIGatewayClient::getDomainName
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainNameResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDomainNameResponsePrivate(this), parent)
{
    setRequest(new GetDomainNameRequest(request));
    setReply(reply);
}

const GetDomainNameRequest * GetDomainNameResponse::request() const
{
    Q_D(const GetDomainNameResponse);
    return static_cast<const GetDomainNameRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDomainName response.
 *
 * @param  response  Response to parse.
 */
void GetDomainNameResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDomainNameResponsePrivate
 *
 * @brief  Private implementation for GetDomainNameResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainNameResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainNameResponse instance.
 */
GetDomainNameResponsePrivate::GetDomainNameResponsePrivate(
    GetDomainNameQueueResponse * const q) : GetDomainNamePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDomainNameResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainNameResponsePrivate::GetDomainNameResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNameResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace AWS
