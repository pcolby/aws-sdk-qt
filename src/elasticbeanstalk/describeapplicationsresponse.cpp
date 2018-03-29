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

#include "describeapplicationsresponse.h"
#include "describeapplicationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeApplicationsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeApplications responses.
 *
 * @see    ElasticBeanstalkClient::describeApplications
 */

/**
 * @brief  Constructs a new DescribeApplicationsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeApplicationsResponse::DescribeApplicationsResponse(
        const DescribeApplicationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeApplicationsResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationsRequest(request));
    setReply(reply);
}

const DescribeApplicationsRequest * DescribeApplicationsResponse::request() const
{
    Q_D(const DescribeApplicationsResponse);
    return static_cast<const DescribeApplicationsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeApplications response.
 *
 * @param  response  Response to parse.
 */
void DescribeApplicationsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeApplicationsResponsePrivate
 *
 * @brief  Private implementation for DescribeApplicationsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeApplicationsResponse instance.
 */
DescribeApplicationsResponsePrivate::DescribeApplicationsResponsePrivate(
    DescribeApplicationsQueueResponse * const q) : DescribeApplicationsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeApplicationsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeApplicationsResponsePrivate::DescribeApplicationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
