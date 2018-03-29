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

#include "describereserveddbinstancesresponse.h"
#include "describereserveddbinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeReservedDBInstancesResponse
 *
 * @brief  Handles RDS DescribeReservedDBInstances responses.
 *
 * @see    RDSClient::describeReservedDBInstances
 */

/**
 * @brief  Constructs a new DescribeReservedDBInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReservedDBInstancesResponse::DescribeReservedDBInstancesResponse(
        const DescribeReservedDBInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeReservedDBInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeReservedDBInstancesRequest(request));
    setReply(reply);
}

const DescribeReservedDBInstancesRequest * DescribeReservedDBInstancesResponse::request() const
{
    Q_D(const DescribeReservedDBInstancesResponse);
    return static_cast<const DescribeReservedDBInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeReservedDBInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeReservedDBInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReservedDBInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReservedDBInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeReservedDBInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReservedDBInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReservedDBInstancesResponse instance.
 */
DescribeReservedDBInstancesResponsePrivate::DescribeReservedDBInstancesResponsePrivate(
    DescribeReservedDBInstancesResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeReservedDBInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReservedDBInstancesResponsePrivate::DescribeReservedDBInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReservedDBInstancesResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
