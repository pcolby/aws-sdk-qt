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

#include "describereservedinstancesofferingsresponse.h"
#include "describereservedinstancesofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesOfferingsResponse
 *
 * @brief  Handles EC2 DescribeReservedInstancesOfferings responses.
 *
 * @see    EC2Client::describeReservedInstancesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedInstancesOfferingsResponse::DescribeReservedInstancesOfferingsResponse(
        const DescribeReservedInstancesOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeReservedInstancesOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesOfferingsRequest(request));
    setReply(reply);
}

const DescribeReservedInstancesOfferingsRequest * DescribeReservedInstancesOfferingsResponse::request() const
{
    Q_D(const DescribeReservedInstancesOfferingsResponse);
    return static_cast<const DescribeReservedInstancesOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeReservedInstancesOfferings response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedInstancesOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesOfferingsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedInstancesOfferingsResponse instance.
 */
DescribeReservedInstancesOfferingsResponsePrivate::DescribeReservedInstancesOfferingsResponsePrivate(
    DescribeReservedInstancesOfferingsQueueResponse * const q) : DescribeReservedInstancesOfferingsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeReservedInstancesOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedInstancesOfferingsResponsePrivate::DescribeReservedInstancesOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesOfferingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
