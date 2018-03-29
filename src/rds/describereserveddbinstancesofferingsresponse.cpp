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

#include "describereserveddbinstancesofferingsresponse.h"
#include "describereserveddbinstancesofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeReservedDBInstancesOfferingsResponse
 *
 * @brief  Handles RDS DescribeReservedDBInstancesOfferings responses.
 *
 * @see    RDSClient::describeReservedDBInstancesOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedDBInstancesOfferingsResponse::DescribeReservedDBInstancesOfferingsResponse(
        const DescribeReservedDBInstancesOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeReservedDBInstancesOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedDBInstancesOfferingsRequest(request));
    setReply(reply);
}

const DescribeReservedDBInstancesOfferingsRequest * DescribeReservedDBInstancesOfferingsResponse::request() const
{
    Q_D(const DescribeReservedDBInstancesOfferingsResponse);
    return static_cast<const DescribeReservedDBInstancesOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeReservedDBInstancesOfferings response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedDBInstancesOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedDBInstancesOfferingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedDBInstancesOfferingsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedDBInstancesOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedDBInstancesOfferingsResponse instance.
 */
DescribeReservedDBInstancesOfferingsResponsePrivate::DescribeReservedDBInstancesOfferingsResponsePrivate(
    DescribeReservedDBInstancesOfferingsResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeReservedDBInstancesOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedDBInstancesOfferingsResponsePrivate::DescribeReservedDBInstancesOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedDBInstancesOfferingsResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
