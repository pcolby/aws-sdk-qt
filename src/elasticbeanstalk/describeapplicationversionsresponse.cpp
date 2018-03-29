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

#include "describeapplicationversionsresponse.h"
#include "describeapplicationversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeApplicationVersionsResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeApplicationVersions responses.
 *
 * @see    ElasticBeanstalkClient::describeApplicationVersions
 */

/**
 * @brief  Constructs a new DescribeApplicationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeApplicationVersionsResponse::DescribeApplicationVersionsResponse(
        const DescribeApplicationVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeApplicationVersionsResponsePrivate(this), parent)
{
    setRequest(new DescribeApplicationVersionsRequest(request));
    setReply(reply);
}

const DescribeApplicationVersionsRequest * DescribeApplicationVersionsResponse::request() const
{
    Q_D(const DescribeApplicationVersionsResponse);
    return static_cast<const DescribeApplicationVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeApplicationVersions response.
 *
 * @param  response  Response to parse.
 */
void DescribeApplicationVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeApplicationVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeApplicationVersionsResponsePrivate
 *
 * @brief  Private implementation for DescribeApplicationVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeApplicationVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeApplicationVersionsResponse instance.
 */
DescribeApplicationVersionsResponsePrivate::DescribeApplicationVersionsResponsePrivate(
    DescribeApplicationVersionsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeApplicationVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeApplicationVersionsResponsePrivate::DescribeApplicationVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeApplicationVersionsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
