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

#include "describeenvironmenthealthresponse.h"
#include "describeenvironmenthealthresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentHealthResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeEnvironmentHealth responses.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentHealth
 */

/**
 * @brief  Constructs a new DescribeEnvironmentHealthResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentHealthResponse::DescribeEnvironmentHealthResponse(
        const DescribeEnvironmentHealthRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeEnvironmentHealthResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentHealthRequest(request));
    setReply(reply);
}

const DescribeEnvironmentHealthRequest * DescribeEnvironmentHealthResponse::request() const
{
    Q_D(const DescribeEnvironmentHealthResponse);
    return static_cast<const DescribeEnvironmentHealthRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeEnvironmentHealth response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentHealthResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEnvironmentHealthResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentHealthResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentHealthResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentHealthResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentHealthResponse instance.
 */
DescribeEnvironmentHealthResponsePrivate::DescribeEnvironmentHealthResponsePrivate(
    DescribeEnvironmentHealthResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeEnvironmentHealthResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentHealthResponsePrivate::parseDescribeEnvironmentHealthResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentHealthResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
