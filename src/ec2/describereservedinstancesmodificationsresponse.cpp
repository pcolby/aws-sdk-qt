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

#include "describereservedinstancesmodificationsresponse.h"
#include "describereservedinstancesmodificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/**
 * @class  DescribeReservedInstancesModificationsResponse
 *
 * @brief  Handles EC2 DescribeReservedInstancesModifications responses.
 *
 * @see    EC2Client::describeReservedInstancesModifications
 */

/**
 * @brief  Constructs a new DescribeReservedInstancesModificationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedInstancesModificationsResponse::DescribeReservedInstancesModificationsResponse(
        const DescribeReservedInstancesModificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeReservedInstancesModificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedInstancesModificationsRequest(request));
    setReply(reply);
}

const DescribeReservedInstancesModificationsRequest * DescribeReservedInstancesModificationsResponse::request() const
{
    Q_D(const DescribeReservedInstancesModificationsResponse);
    return static_cast<const DescribeReservedInstancesModificationsRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 DescribeReservedInstancesModifications response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedInstancesModificationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedInstancesModificationsResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedInstancesModificationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedInstancesModificationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedInstancesModificationsResponse instance.
 */
DescribeReservedInstancesModificationsResponsePrivate::DescribeReservedInstancesModificationsResponsePrivate(
    DescribeReservedInstancesModificationsQueueResponse * const q) : DescribeReservedInstancesModificationsPrivate(q)
{

}

/**
 * @brief  Parse an EC2 DescribeReservedInstancesModificationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedInstancesModificationsResponsePrivate::DescribeReservedInstancesModificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedInstancesModificationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
