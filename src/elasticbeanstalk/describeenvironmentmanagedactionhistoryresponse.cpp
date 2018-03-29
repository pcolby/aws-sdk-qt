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

#include "describeenvironmentmanagedactionhistoryresponse.h"
#include "describeenvironmentmanagedactionhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DescribeEnvironmentManagedActionHistoryResponse
 *
 * @brief  Handles ElasticBeanstalk DescribeEnvironmentManagedActionHistory responses.
 *
 * @see    ElasticBeanstalkClient::describeEnvironmentManagedActionHistory
 */

/**
 * @brief  Constructs a new DescribeEnvironmentManagedActionHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentManagedActionHistoryResponse::DescribeEnvironmentManagedActionHistoryResponse(
        const DescribeEnvironmentManagedActionHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DescribeEnvironmentManagedActionHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentManagedActionHistoryRequest(request));
    setReply(reply);
}

const DescribeEnvironmentManagedActionHistoryRequest * DescribeEnvironmentManagedActionHistoryResponse::request() const
{
    Q_D(const DescribeEnvironmentManagedActionHistoryResponse);
    return static_cast<const DescribeEnvironmentManagedActionHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DescribeEnvironmentManagedActionHistory response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentManagedActionHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentManagedActionHistoryResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentManagedActionHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentManagedActionHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentManagedActionHistoryResponse instance.
 */
DescribeEnvironmentManagedActionHistoryResponsePrivate::DescribeEnvironmentManagedActionHistoryResponsePrivate(
    DescribeEnvironmentManagedActionHistoryQueueResponse * const q) : DescribeEnvironmentManagedActionHistoryPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DescribeEnvironmentManagedActionHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentManagedActionHistoryResponsePrivate::DescribeEnvironmentManagedActionHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentManagedActionHistoryResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
