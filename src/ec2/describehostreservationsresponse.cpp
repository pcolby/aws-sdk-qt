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

#include "describehostreservationsresponse.h"
#include "describehostreservationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  DescribeHostReservationsResponse
 *
 * @brief  Handles EC2 DescribeHostReservations responses.
 *
 * @see    EC2Client::describeHostReservations
 */

/**
 * @brief  Constructs a new DescribeHostReservationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeHostReservationsResponse::DescribeHostReservationsResponse(
        const DescribeHostReservationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeHostReservationsResponsePrivate(this), parent)
{
    setRequest(new DescribeHostReservationsRequest(request));
    setReply(reply);
}

const DescribeHostReservationsRequest * DescribeHostReservationsResponse::request() const
{
    Q_D(const DescribeHostReservationsResponse);
    return static_cast<const DescribeHostReservationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeHostReservations response.
 *
 * @param  response  Response to parse.
 */
void DescribeHostReservationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeHostReservationsResponsePrivate
 *
 * @brief  Private implementation for DescribeHostReservationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeHostReservationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeHostReservationsResponse instance.
 */
DescribeHostReservationsResponsePrivate::DescribeHostReservationsResponsePrivate(
    DescribeHostReservationsQueueResponse * const q) : DescribeHostReservationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeHostReservationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeHostReservationsResponsePrivate::DescribeHostReservationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeHostReservationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace AWS
