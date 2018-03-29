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

#include "getdomainnamesresponse.h"
#include "getdomainnamesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace APIGateway {

/**
 * @class  GetDomainNamesResponse
 *
 * @brief  Handles APIGateway GetDomainNames responses.
 *
 * @see    APIGatewayClient::getDomainNames
 */

/**
 * @brief  Constructs a new GetDomainNamesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainNamesResponse::GetDomainNamesResponse(
        const GetDomainNamesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : APIGatewayResponse(new GetDomainNamesResponsePrivate(this), parent)
{
    setRequest(new GetDomainNamesRequest(request));
    setReply(reply);
}

const GetDomainNamesRequest * GetDomainNamesResponse::request() const
{
    Q_D(const GetDomainNamesResponse);
    return static_cast<const GetDomainNamesRequest *>(d->request);
}

/**
 * @brief  Parse a APIGateway GetDomainNames response.
 *
 * @param  response  Response to parse.
 */
void GetDomainNamesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainNamesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDomainNamesResponsePrivate
 *
 * @brief  Private implementation for GetDomainNamesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainNamesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainNamesResponse instance.
 */
GetDomainNamesResponsePrivate::GetDomainNamesResponsePrivate(
    GetDomainNamesResponse * const q) : APIGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an APIGateway GetDomainNamesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainNamesResponsePrivate::GetDomainNamesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainNamesResponse"));
    /// @todo
}

} // namespace APIGateway
} // namespace QtAws
