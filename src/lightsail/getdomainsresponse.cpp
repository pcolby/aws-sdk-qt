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

#include "getdomainsresponse.h"
#include "getdomainsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetDomainsResponse
 *
 * @brief  Handles Lightsail GetDomains responses.
 *
 * @see    LightsailClient::getDomains
 */

/**
 * @brief  Constructs a new GetDomainsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDomainsResponse::GetDomainsResponse(
        const GetDomainsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetDomainsResponse(new GetDomainsResponsePrivate(this), parent)
{
    setRequest(new GetDomainsRequest(request));
    setReply(reply);
}

const GetDomainsRequest * GetDomainsResponse::request() const
{
    Q_D(const GetDomainsResponse);
    return static_cast<const GetDomainsRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetDomains response.
 *
 * @param  response  Response to parse.
 */
void GetDomainsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDomainsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDomainsResponsePrivate
 *
 * @brief  Private implementation for GetDomainsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDomainsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDomainsResponse instance.
 */
GetDomainsResponsePrivate::GetDomainsResponsePrivate(
    GetDomainsResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetDomainsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDomainsResponsePrivate::parseGetDomainsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDomainsResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
