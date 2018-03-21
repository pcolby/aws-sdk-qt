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

#include "describereservedinstanceslistingsresponse.h"
#include "describereservedinstanceslistingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesListingsResponse
 *
 * @brief  Handles EC2 DescribeReservedInstancesListings responses.
 *
 * @see    EC2Client::describeReservedInstancesListings
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesListingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedInstancesListingsResponse::DescribeReservedInstancesListingsResponse(
        const DescribeReservedInstancesListingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeReservedInstancesListingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesListingsRequest(request));
    setReply(reply);
}

const DescribeReservedInstancesListingsRequest * DescribeReservedInstancesListingsResponse::request() const
{
    Q_D(const DescribeReservedInstancesListingsResponse);
    return static_cast<const DescribeReservedInstancesListingsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeReservedInstancesListings response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedInstancesListingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesListingsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesListingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesListingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedInstancesListingsResponse instance.
 */
DescribeReservedInstancesListingsResponsePrivate::DescribeReservedInstancesListingsResponsePrivate(
    DescribeReservedInstancesListingsQueueResponse * const q) : DescribeReservedInstancesListingsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeReservedInstancesListingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedInstancesListingsResponsePrivate::DescribeReservedInstancesListingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesListingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
