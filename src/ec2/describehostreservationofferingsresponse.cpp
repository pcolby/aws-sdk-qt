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

#include "describehostreservationofferingsresponse.h"
#include "describehostreservationofferingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeHostReservationOfferingsResponse
 *
 * @brief  Handles EC2 DescribeHostReservationOfferings responses.
 *
 * @see    EC2Client::describeHostReservationOfferings
 */

/**
 * @brief  Constructs a new DescribeHostReservationOfferingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHostReservationOfferingsResponse::DescribeHostReservationOfferingsResponse(
        const DescribeHostReservationOfferingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeHostReservationOfferingsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostReservationOfferingsRequest(request));
    setReply(reply);
}

const DescribeHostReservationOfferingsRequest * DescribeHostReservationOfferingsResponse::request() const
{
    Q_D(const DescribeHostReservationOfferingsResponse);
    return static_cast<const DescribeHostReservationOfferingsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeHostReservationOfferings response.
 *
 * @param  response  Response to parse.
 */
void DescribeHostReservationOfferingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHostReservationOfferingsResponsePrivate
 *
 * @brief  Private implementation for DescribeHostReservationOfferingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationOfferingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHostReservationOfferingsResponse instance.
 */
DescribeHostReservationOfferingsResponsePrivate::DescribeHostReservationOfferingsResponsePrivate(
    DescribeHostReservationOfferingsQueueResponse * const q) : DescribeHostReservationOfferingsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeHostReservationOfferingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHostReservationOfferingsResponsePrivate::DescribeHostReservationOfferingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostReservationOfferingsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
