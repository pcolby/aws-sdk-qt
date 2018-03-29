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

#include "getloadbalancersresponse.h"
#include "getloadbalancersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetLoadBalancersResponse
 *
 * @brief  Handles Lightsail GetLoadBalancers responses.
 *
 * @see    LightsailClient::getLoadBalancers
 */

/**
 * @brief  Constructs a new GetLoadBalancersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoadBalancersResponse::GetLoadBalancersResponse(
        const GetLoadBalancersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetLoadBalancersResponsePrivate(this), parent)
{
    setRequest(new GetLoadBalancersRequest(request));
    setReply(reply);
}

const GetLoadBalancersRequest * GetLoadBalancersResponse::request() const
{
    Q_D(const GetLoadBalancersResponse);
    return static_cast<const GetLoadBalancersRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetLoadBalancers response.
 *
 * @param  response  Response to parse.
 */
void GetLoadBalancersResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetLoadBalancersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoadBalancersResponsePrivate
 *
 * @brief  Private implementation for GetLoadBalancersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoadBalancersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoadBalancersResponse instance.
 */
GetLoadBalancersResponsePrivate::GetLoadBalancersResponsePrivate(
    GetLoadBalancersResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetLoadBalancersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoadBalancersResponsePrivate::GetLoadBalancersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoadBalancersResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
