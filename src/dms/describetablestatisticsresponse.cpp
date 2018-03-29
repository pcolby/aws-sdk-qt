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

#include "describetablestatisticsresponse.h"
#include "describetablestatisticsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DatabaseMigrationService {

/**
 * @class  DescribeTableStatisticsResponse
 *
 * @brief  Handles DatabaseMigrationService DescribeTableStatistics responses.
 *
 * @see    DatabaseMigrationServiceClient::describeTableStatistics
 */

/**
 * @brief  Constructs a new DescribeTableStatisticsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTableStatisticsResponse::DescribeTableStatisticsResponse(
        const DescribeTableStatisticsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DatabaseMigrationServiceResponse(new DescribeTableStatisticsResponsePrivate(this), parent)
{
    setRequest(new DescribeTableStatisticsRequest(request));
    setReply(reply);
}

const DescribeTableStatisticsRequest * DescribeTableStatisticsResponse::request() const
{
    Q_D(const DescribeTableStatisticsResponse);
    return static_cast<const DescribeTableStatisticsRequest *>(d->request);
}

/**
 * @brief  Parse a DatabaseMigrationService DescribeTableStatistics response.
 *
 * @param  response  Response to parse.
 */
void DescribeTableStatisticsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTableStatisticsResponsePrivate
 *
 * @brief  Private implementation for DescribeTableStatisticsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTableStatisticsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTableStatisticsResponse instance.
 */
DescribeTableStatisticsResponsePrivate::DescribeTableStatisticsResponsePrivate(
    DescribeTableStatisticsQueueResponse * const q) : DescribeTableStatisticsPrivate(q)
{

}

/**
 * @brief  Parse an DatabaseMigrationService DescribeTableStatisticsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTableStatisticsResponsePrivate::DescribeTableStatisticsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableStatisticsResponse"));
    /// @todo
}

} // namespace DatabaseMigrationService
} // namespace QtAws
