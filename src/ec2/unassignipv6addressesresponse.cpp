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

#include "unassignipv6addressesresponse.h"
#include "unassignipv6addressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  UnassignIpv6AddressesResponse
 *
 * @brief  Handles EC2 UnassignIpv6Addresses responses.
 *
 * @see    EC2Client::unassignIpv6Addresses
 */

/**
 * @brief  Constructs a new UnassignIpv6AddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UnassignIpv6AddressesResponse::UnassignIpv6AddressesResponse(
        const UnassignIpv6AddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new UnassignIpv6AddressesResponsePrivate(this), parent)
{
    setRequest(new UnassignIpv6AddressesRequest(request));
    setReply(reply);
}

const UnassignIpv6AddressesRequest * UnassignIpv6AddressesResponse::request() const
{
    Q_D(const UnassignIpv6AddressesResponse);
    return static_cast<const UnassignIpv6AddressesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 UnassignIpv6Addresses response.
 *
 * @param  response  Response to parse.
 */
void UnassignIpv6AddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UnassignIpv6AddressesResponsePrivate
 *
 * @brief  Private implementation for UnassignIpv6AddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UnassignIpv6AddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UnassignIpv6AddressesResponse instance.
 */
UnassignIpv6AddressesResponsePrivate::UnassignIpv6AddressesResponsePrivate(
    UnassignIpv6AddressesQueueResponse * const q) : UnassignIpv6AddressesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 UnassignIpv6AddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UnassignIpv6AddressesResponsePrivate::UnassignIpv6AddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnassignIpv6AddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
