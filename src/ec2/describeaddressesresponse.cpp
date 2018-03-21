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

#include "describeaddressesresponse.h"
#include "describeaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeAddressesResponse
 *
 * @brief  Handles EC2 DescribeAddresses responses.
 *
 * @see    EC2Client::describeAddresses
 */

/**
 * @brief  Constructs a new DescribeAddressesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAddressesResponse::DescribeAddressesResponse(
        const DescribeAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeAddressesRequest(request));
    setReply(reply);
}

const DescribeAddressesRequest * DescribeAddressesResponse::request() const
{
    Q_D(const DescribeAddressesResponse);
    return static_cast<const DescribeAddressesRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeAddresses response.
 *
 * @param  response  Response to parse.
 */
void DescribeAddressesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAddressesResponsePrivate
 *
 * @brief  Private implementation for DescribeAddressesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAddressesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAddressesResponse instance.
 */
DescribeAddressesResponsePrivate::DescribeAddressesResponsePrivate(
    DescribeAddressesQueueResponse * const q) : DescribeAddressesPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeAddressesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAddressesResponsePrivate::DescribeAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAddressesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
