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

#include "describeinstanceshealthresponse.h"
#include "describeinstanceshealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeInstancesHealthResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeInstancesHealth responses.
 *
 * @see    ElasticBeanstalkClient::describeInstancesHealth
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInstancesHealthResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeInstancesHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeInstancesHealthRequest(request));
    setReply(reply);
}

const DescribeInstancesHealthRequest * DescribeInstancesHealthResponse::request() const
{
    Q_D(const DescribeInstancesHealthResponse);
    return static_cast<const DescribeInstancesHealthRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeInstancesHealth response.
 *
 * @param  response  Response to parse.
 */
void DescribeInstancesHealthResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInstancesHealthResponsePrivate
 *
 * @brief  Private implementation for DescribeInstancesHealthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInstancesHealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInstancesHealthResponse instance.
 */
DescribeInstancesHealthResponsePrivate::DescribeInstancesHealthResponsePrivate(
    DescribeInstancesHealthQueueResponse * const q) : DescribeInstancesHealthPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeInstancesHealthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInstancesHealthResponsePrivate::DescribeInstancesHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInstancesHealthResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
