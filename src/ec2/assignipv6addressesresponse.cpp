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

#include "assignipv6addressesresponse.h"
#include "assignipv6addressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  AssignIpv6AddressesResponse
 *
 * @brief  Handles EC2 AssignIpv6Addresses responses.
 *
 * @see    EC2Client::assignIpv6Addresses
 */

/**
 * @brief  Constructs a new AssignIpv6AddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssignIpv6AddressesResponse::AssignIpv6AddressesResponse(
        const AssignIpv6AddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new AssignIpv6AddressesResponsePrivate(this), parent)
{
    setRequest(new AssignIpv6AddressesRequest(request));
    setReply(reply);
}

const AssignIpv6AddressesRequest * AssignIpv6AddressesResponse::request() const
{
    Q_D(const AssignIpv6AddressesResponse);
    return static_cast<const AssignIpv6AddressesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 AssignIpv6Addresses response.
 *
 * @param  response  Response to parse.
 */
void AssignIpv6AddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssignIpv6AddressesResponsePrivate
 *
 * @brief  Private implementation for AssignIpv6AddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssignIpv6AddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssignIpv6AddressesResponse instance.
 */
AssignIpv6AddressesResponsePrivate::AssignIpv6AddressesResponsePrivate(
    AssignIpv6AddressesQueueResponse * const q) : AssignIpv6AddressesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 AssignIpv6AddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssignIpv6AddressesResponsePrivate::AssignIpv6AddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssignIpv6AddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
