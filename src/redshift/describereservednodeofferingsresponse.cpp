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

#include "describereservednodeofferingsresponse.h"
#include "describereservednodeofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Redshift {

/**
 * @class  DescribeReservedNodeOfferingsResponse
 *
 * @brief  Handles Redshift DescribeReservedNodeOfferings responses.
 *
 * @see    RedshiftClient::describeReservedNodeOfferings
 */

/**
 * @brief  Constructs a new DescribeReservedNodeOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedNodeOfferingsResponse::DescribeReservedNodeOfferingsResponse(
        const DescribeReservedNodeOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new DescribeReservedNodeOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedNodeOfferingsRequest(request));
    setReply(reply);
}

const DescribeReservedNodeOfferingsRequest * DescribeReservedNodeOfferingsResponse::request() const
{
    Q_D(const DescribeReservedNodeOfferingsResponse);
    return static_cast<const DescribeReservedNodeOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift DescribeReservedNodeOfferings response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedNodeOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedNodeOfferingsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedNodeOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedNodeOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedNodeOfferingsResponse instance.
 */
DescribeReservedNodeOfferingsResponsePrivate::DescribeReservedNodeOfferingsResponsePrivate(
    DescribeReservedNodeOfferingsQueueResponse * const q) : DescribeReservedNodeOfferingsPrivate(q)
{

}

/**
 * @brief  Parse an Redshift DescribeReservedNodeOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedNodeOfferingsResponsePrivate::DescribeReservedNodeOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedNodeOfferingsResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace AWS
