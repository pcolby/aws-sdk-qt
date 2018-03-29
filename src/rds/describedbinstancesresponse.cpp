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

#include "describedbinstancesresponse.h"
#include "describedbinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  DescribeDBInstancesResponse
 *
 * @brief  Handles RDS DescribeDBInstances responses.
 *
 * @see    RDSClient::describeDBInstances
 */

/**
 * @brief  Constructs a new DescribeDBInstancesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDBInstancesResponse::DescribeDBInstancesResponse(
        const DescribeDBInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new DescribeDBInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeDBInstancesRequest(request));
    setReply(reply);
}

const DescribeDBInstancesRequest * DescribeDBInstancesResponse::request() const
{
    Q_D(const DescribeDBInstancesResponse);
    return static_cast<const DescribeDBInstancesRequest *>(d->request);
}

/**
 * @brief  Parse a RDS DescribeDBInstances response.
 *
 * @param  response  Response to parse.
 */
void DescribeDBInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDBInstancesResponsePrivate
 *
 * @brief  Private implementation for DescribeDBInstancesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDBInstancesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDBInstancesResponse instance.
 */
DescribeDBInstancesResponsePrivate::DescribeDBInstancesResponsePrivate(
    DescribeDBInstancesQueueResponse * const q) : DescribeDBInstancesPrivate(q)
{

}

/**
 * @brief  Parse an RDS DescribeDBInstancesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDBInstancesResponsePrivate::DescribeDBInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDBInstancesResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
